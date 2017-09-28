#include "lem_in.h"

void ft_add_path(t_path **start, t_path **i)
{
    t_path *tmp;

    tmp = *start;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = malloc(sizeof(t_path));
    tmp->next->way = (*i)->way;
    tmp->next->length = (*i)->length;
    tmp->next->next = NULL;
}

int is_common_rooms(t_link *path, t_link *i)
{
    t_link *j;

    while (path != NULL)
    {
        j = i;
        while (j != NULL)
        {
            if (path->room->type == 5)
                if (j->room->type == 5)
                    if (j->room->id == path->room->id)
                        return (1);
            j = j->next;
        }
        path = path->next;
    }
    return (0);
}

int is_crossed(t_path **path, t_path *i)
{
    t_path *tmp;

    tmp = *path;
    while(tmp != NULL)
    {
        if (is_common_rooms(tmp->way, i->way))
            return (1);
        tmp = tmp->next;
    }
    return (0);
}

t_path *ft_malloc_l(t_path **path)
{
    t_path *start;

    start = malloc(sizeof(t_path));
    start->way = (*path)->way;
    start->length = (*path)->length;
    start->next = NULL;
    return (start);
}

void ft_print_map(int ants, t_path **path) //перед этим за принтить инфу которую спарсил
{
    t_path *start;
    t_path *i;
    int steps;

    start = ft_malloc_l(path);
    i = (*path)->next;
    steps = start->length;

    if (steps < ants)
        while (i != NULL)
        {
            if (!is_crossed(&start, i))
            {
                ft_add_path(&start, &i);
                steps += i->length;
            }
            if (steps >= ants)
                break ;
            i = i->next;
        }
    ft_print_path(ants, start);
    //function for printing ants;
    // free all linked list start
}