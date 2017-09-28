#include "lem_in.h"

t_path *ft_malloc_path(void)
{
    t_path *p;

    p = malloc(sizeof(t_path));
    p->length = 0;
    p->way = NULL;
    p->next = NULL;

    return (p);
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
    ft_printf("%d\n%s\n", data->ants, data->join);
    ft_print_map(data->ants, &path);
    /*printf("START\n");
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
    printf("END\n");*/
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