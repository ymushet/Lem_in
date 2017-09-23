#include "lem_in.h"

/*int *ft_malloc_zero_int_array(int data)
{
    int *arr;
    int i;

    i = 0;
    arr = malloc(data * sizeof(int));
    while (i < data)
    {
        arr[i] = 0;
        i++;
    }
    return (arr);
}*/

t_link *ft_get_que(t_room *start)
{
    t_link *que;

    que = malloc(sizeof(t_link));
    que->room = start;
    que->next = NULL;
    return (que);
}

/*t_link *ft_copy_rooms(t_room *rooms)
{
    t_room *r;
    t_link *copy;
    t_link * head;

    r = rooms;
    head = NULL;
    copy = NULL;
    while (r != NULL)
    {
        if (copy == NULL)
        {
            copy = ft_get_que(r);
            head = copy;
        }
        else
        {
            copy->next = ft_get_que(r);
            copy = copy->next;
        }
        r = r->next;
    }
    return (head);
}

int is_all_used(t_link *used, t_room *room)
{

}*/

t_path *ft_malloc_path(void)
{
    t_path *p;

    p = malloc(sizeof(t_path));
    p->length = 0;
    p->way = NULL;
    p->next = NULL;

    return (p);
}

t_room *ft_get_end(t_room *room)
{
    t_room *r;

    r = room;
    while(r != NULL)
    {
        if (r->type == 3)
            return (r);
        r = r->next;
    }
    return (NULL);
}

void add_to_way(t_room *room, t_path **path) //добавляю весь путь в один указатель
{
    t_link *w;

    w = ft_get_que(room);
    w->next = (*path)->way;
    (*path)->way = w;

}
//дописать 1 всем тупикам!
void ft_restore_path(t_room* end, t_path **path) //rewrite!!!
{
    t_link *p;

    if (end->distance == 0)
        return ;
    p = end->parent;
    while (p != NULL)
    {
        if (p->room->distance == end->distance - 1 && p->room->used != 1) //some trouble here
        {
            p->room->used = 1;
            add_to_way(p->room, path);
            ft_restore_path(p->room, path);
            return ;
        }
        p = p->next;
    }
}

void ft_read_path(t_room *room, t_path **path)
{
    t_path *p;
    t_path *n;

    p = *path;
    n = NULL;
    if (p == NULL)
    {
        n = ft_malloc_path();
        *path = n;
    }
    else
    {
        n = ft_malloc_path();
        n->next = *path;
        *path = n;
    }
    ft_restore_path(ft_get_end(room), &n);
}

void ft_solve_map(t_data *data, t_room *room)
{
    t_room *start;
    t_link *que;
    t_path *path;

    path = NULL;
    start = ft_get_start(room);
    que = NULL;
    dfs(start, &que, &path);
    if (path == NULL)
    {
        printf("ERROR\n");
    }
    ft_print_map(data->ants, &path);
    printf("START\n");
    while (path != NULL)
    {
        while (path->way != NULL)
        {
            printf("%s ", path->way->room->name);
            path->way = path->way->next;
        }
        printf("\n");
        path = path->next;
    }
    printf("END\n");
}

t_room *ft_get_start(t_room *room)
{
    t_room *r;
    t_room *start;
    int tmp;

    start = NULL;
    tmp = 0;
    r = room;
    while (r != NULL)
    {
        if (r->type == 2)
            start = r;
        r->id = tmp++;
        r = r->next;
    }
    return (start);
}

/*void bfs(int distance, t_room *start)//start - 2, end - 3, comment - 1, link - 4, room - 5
{
    t_link *neigbor; //решить проблему с круговым графом! (ограничение по посещению должно все равно присутствовать, но разрулить ситуацию, где нашли путь, но есть еще и он не самый короткий)

    if (start != NULL)
    {
        start->visited = 1;
        neigbor = start->links;
        while (neigbor != NULL)
        {
            if (neigbor->room->distance > distance + 1 || neigbor->room->distance == 0)
                start->links->room->distance = distance + 1;
                bfs(distance + 1, neigbor->room);
            neigbor = neigbor->next;
        }
    }
    return ;
}*/

void ft_add_parent(t_room **children, t_room **parent)
{
    t_link *mama;

    mama = ft_get_que(*parent);
    if ((*children)->parent == NULL)
    {
        (*children)->parent = mama;
    }
    else
    {
        mama->next = (*children)->parent;
        (*children)->parent = mama;
    }
}

//находить и помечать тупики как визитед

/*void bfs(t_room *start, t_link *que) //в принципе можно еще парента написать тут, но как именно он работает ? по добавлять парент ссылки в линках или в румах (скорее всего в румах)
{
    t_link *n;

    if (que != NULL)
    {
        start->visited = 1;
        n = start->links;
        while (n != NULL)
        {
            if (n->room->visited != 1 && n->room->used != 1)
            {
                n->room->visited = 1;
                ft_add_parent(&n->room , &start);
                n->room->distance = start->distance + 1;
                push(que, n);
            }
            n = n->next;
        }
        pop(&que);
        if (que != NULL)
            bfs(que->room, que);
    }
    return ;
}*/


/*int ft_end_in_que(t_link *que)
{
    t_link *tmp;
    tmp =que;

    while(tmp != NULL)
    {
        if (tmp->room->type == 3)
        {
            return (1);
        }
            tmp = tmp->next;
    }
    return (0);
}

void write_path(t_link *path)
{

}

void dfs(t_room *start, t_link *que, t_link *path)
{
    if (ft_end_in_que(que))
    {
        write_path(path);
        delete_end(que);
        return ;
    }
    while(start->links != NULL)
    {
        if (ft_not_in_que(start->links->room, que))
        {
            push(que, start->links);
            dfs(start->links->room, que, path);
        }
        start->links = start->links->next;
    }
    return ;
}*/