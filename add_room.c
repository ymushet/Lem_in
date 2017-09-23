#include "lem_in.h"

t_room *ft_malloc_new_room(char *line, int type)
{
    t_room *room;
    char **tmp;

    tmp = ft_strsplit(line, ' ');
    room = malloc(sizeof(t_room));
    room->id = 0;
    room->name = ft_strdup(tmp[0]);
    room->x = (int)ft_atoi(tmp[1]);
    room->y = (int)ft_atoi(tmp[2]);
    room->next = NULL;
    room->links = NULL;
    room->parent = NULL;
    room->type = type;
    room->visited = 0;
    room->distance = 0;
    room->used = 0;
    return (room);
}

void ft_add_room(t_room **rooms, char *line, int type)
{
    t_room *r;

    if (*rooms == NULL)
    {
        *rooms = ft_malloc_new_room(line, type);
    }
    else
    {
        r = ft_malloc_new_room(line, type);
        r->next = *rooms;
        *rooms = r;
    }
    (*rooms)->type = type;
}

int check_room(t_room *room, char *line)
{
    t_room *r;
    char **l;
    long x;
    long y;

    l = ft_strsplit(line, ' ');
    r = room;
    x = ft_atoi(l[1]);
    y = ft_atoi(l[2]);
    while (r != NULL)
    {
        if ((!ft_strcmp(l[0], r->name)) || (r->x == x && r->y == y))
            return (0);
        r = r->next;
    }
    return (1);
}