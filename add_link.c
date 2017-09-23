#include "lem_in.h"

t_room *ft_find_room(t_room **room, char *name)
{
    t_room *r;

    r = *room;
    while (r != NULL)
    {
        if (!ft_strcmp(name, r->name))
            return (r);
        r = r->next;
    }
    return (NULL);
}

int check_link(t_room **room, char *link)
{
    char **line;

    line = ft_strsplit(link, '-'); //FREE SPLIT
    if (ft_find_room(room, line[0]) != NULL && ft_find_room(room, line[1]) != NULL)
    {
        return (1);
    }
    return (0);
}

t_link *ft_malloc_link(char *link, t_room **room)
{
    t_link *l;

    l = malloc(sizeof(t_link));
    l->room = ft_find_room(room, link);
    l->next = NULL;
    //l->visited = 0;
    return (l);
}

/*void ft_add_link(t_room **room, char *line) //one way connection //добавить проверку на то существует ли уже эта линка, научиться добавлять двухсторонний линк.
{
    t_room *r;
    t_link *l;
    char **link;

    link = ft_strsplit(line, '-');
    r = ft_find_room(room, link[0]);
    if (r->links == NULL)
        r->links = ft_malloc_link(link[1], room);
    else
    {
        l = ft_malloc_link(link[1], room);
        l->next = r->links;
        r->links = l;
    }
    r = ft_find_room(room, link[1]);
    if (r->links == NULL)
        r->links = ft_malloc_link(link[0], room);
    else
    {
        l = ft_malloc_link(link[0], room);
        l->next = r->links;
        r->links = l;
    }
} //ПЕРЕПИСАТЬ!*/

void ft_add_link(t_room **room, char *line)
{
    t_room *r;
    t_link *l;
    char **link;

    link = ft_strsplit(line, '-');
    r = ft_find_room(room, link[0]);
    if (r->links == NULL)
    {
        if (r->links == NULL)
            r->links = ft_malloc_link(link[1], room);
    }
    else
    {
        l = r->links;
        while(l->next != NULL)
            l = l->next;
        if (is_link_exist(r, link[1]))
            return ;
        l->next = ft_malloc_link(link[1], room);
    }
    ft_add_second_link(room, link[0], link[1]);
    //FREE **link; - add this!
}

void ft_add_second_link(t_room **room, char *link1, char *link2)
{
    t_room *r;
    t_link *l;

    r = ft_find_room(room, link2);
    if (r->links == NULL)
    {
        if (r->links == NULL)
            r->links = ft_malloc_link(link1, room);
    }
    else
    {
        l = r->links;
        while(l->next != NULL)
            l = l->next;
        if(is_link_exist(r, link1))
            return ;
        l->next = ft_malloc_link(link1, room);
    }
}

int is_link_exist(t_room *room, char *line)
{
    t_link *l;

    l = room->links;
    while (l != NULL)
    {
        if (ft_strcmp(l->room->name, line) == 0)
        {
            return (1);
        }
        l = l->next;
    }
    return (0);
}