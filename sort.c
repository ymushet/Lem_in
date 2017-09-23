#include "lem_in.h"

void swap(t_path **p1, t_path **p2)
{
    int tmp_length;
    t_link *tmp_link;

    tmp_length = (*p1)->length;
    (*p1)->length = (*p2)->length;
    (*p2)->length = tmp_length;
    tmp_link = (*p1)->way;
    (*p1)->way = (*p2)->way;
    (*p2)->way = tmp_link;
}

int is_sort(t_path **path)
{
    t_path *p;

    p = *path;
    while(p->next)
    {
        if (p->length > p->next->length)
            return (0);
        p = p->next;
    }
    return (1);
}

void  ft_sort_path(t_path **path)
{
    t_path  *p;

    while (!is_sort(path))
    {
        p = *path;
        while (p->next != NULL)
        {
            if (p->length > p->next->length)
                swap(&p, &p->next);
            p = p->next;
        }
    }
}