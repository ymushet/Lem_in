#include "lem_in.h"

void push(t_link **que, t_room **start)
{
    t_link *q; //tmp var for que;
    t_link *ql;// que last var before we move pointer;

    q = *que;
    if (*que == NULL)
    {
        *que = malloc(sizeof(t_link));
        (*que)->room = *start;
        (*que)->next = NULL;
    }
    else
    {
        ql = q;
        while (q != NULL)
        {
            if(q->room->id == (*start)->id)
                return ;
            ql = q;
            q = q->next;
        }
        ql->next = malloc(sizeof(t_link));
        ql->next->room = *start;
        ql->next->next = NULL;
    }
}

void    pop_last(t_link **que)
{//possible memmory leaks ловит сегфолт
    t_link *tmp;
    t_link *tail;

    if (*que != NULL)
    {
        tmp = *que;
        tail = tmp;
        while(tmp->next != NULL)
        {
            tail = tmp;
            tmp = tmp->next;
        }
        tmp->room->visited = 0;
        free(tmp); //был даблфрии на картах где много связей.
        tail->next = NULL;
    }
}

void    dfs(t_room *start, t_link **que, t_path **path) //переписать пуш под добавлени комнаты от нуля, исправить мелкие ошибки с типами данных в хедере и дфс
{
    t_link *neigbor;

    if (que != NULL)
    {
        start->visited = 1;
        neigbor = start->links;
        push(que, &start);
        while (neigbor != NULL)
        {
            if (start->type == 3)
            {
                write_path(que, path);
                pop_last(que);
                return ;
            }
            if (neigbor->room->visited != 1)
                dfs(neigbor->room, que, path);
            neigbor = neigbor->next;
        }
        pop_last(que);
    }
}

int     ft_calc_length(t_link *path)
{
    int i;
    t_link *p;

    i = 0;
    p = path;
    while(p != NULL)
    {
        i++;
        p = p->next;
    }
    return (i);
}

void    write_path(t_link **que, t_path **path)
{
    t_path *p;

    p = ft_malloc_path();
    p->way = ft_copy_que(que);//копируем путь //возможно мемори лики или дабл фри (но это не точно)
    p->length = ft_calc_length(p->way);
    if (*path == NULL) //список списков путей (тут можно просто добавить или добавить в место по длине).
    {
        (*path) = p;
    }
    else
    {
        ft_insert_path(p, path);
    }
}

void insert(t_path **first, t_path **second, t_path **insert, t_path **path) //проверить надо ли ** что бы менялось значение.
{
    if (*first == NULL)
    {
        (*insert)->next = *path;
        *path = *insert;
    }
    else
    {
        (*first)->next = *insert;
        (*insert)->next = *second;
    }
}

void ft_insert_path(t_path *copy, t_path **path)
{
    t_path *tmp;
    t_path *prev;

    prev = NULL;
    tmp = *path;
    while (tmp->next != NULL) //rewrite if and insert;
    {
        if (tmp->length <= copy->length)
        {
            insert(&prev, &tmp, &copy, path); //rewrite!
            return ;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    tmp->next = copy;
}

t_link *ft_create_link(void)
{
    t_link *link;

    link = malloc(sizeof(t_link));
    link->room = NULL;
    link->next = NULL;
    return (link);
}

t_link *ft_malloc_empty_path(t_link *que) //найти ошибку
{
    t_link *q;
    t_link *p;
    t_link *head;

    q = que;
    head = ft_create_link();
    p = head;
    while(q->next != NULL)
    {
        p->next = malloc(sizeof(t_link));
        p->next->room = NULL;
        p->next->next = NULL;
        p = p->next;
        q = q->next;
    }
    return (head);
}

t_link *ft_copy_que(t_link **que) //вычислить длину пути при копировании.
{
    t_link *q;
    t_link *path;
    t_link *p;

    q = *que;
    path = ft_malloc_empty_path(*que); //идем циклом и маллочим с наллами линкед лист //ERROR
    p = path;
    while(q != NULL)
    {
        p->room = q->room;
        p = p->next;
        q = q->next;
    }
    return (path);
}