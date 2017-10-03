/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 16:03:24 by ymushet           #+#    #+#             */
/*   Updated: 2017/09/28 16:25:52 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_room		*ft_find_room(t_room **room, char *name)
{
	t_room	*r;

	r = *room;
	while (r != NULL)
	{
		if (!ft_strcmp(name, r->name))
			return (r);
		r = r->next;
	}
	return (NULL);
}

int			check_link(t_room **room, char *link)
{
	char **line;

	line = ft_strsplit(link, '-');
	if (ft_find_room(room, line[0]) != NULL
					&& ft_find_room(room, line[1]) != NULL)
	{
        ft_free_split(&line);
		return (1);
	}
    ft_free_split(&line);
	return (0);
}

t_link		*ft_malloc_link(char *link, t_room **room)
{
	t_link *l;

	l = malloc(sizeof(t_link));
	l->room = ft_find_room(room, link);
	l->next = NULL;
	return (l);
}

void		ft_add_link(t_room **room, char *line)
{
	t_room		*r;
	t_link		*l;
	char		**link;

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
		while (l->next != NULL)
			l = l->next;
		if (is_link_exist(r, link[1]))
		{
			ft_free_split(&link);
			return ;
		}
		l->next = ft_malloc_link(link[1], room);
	}
	ft_add_second_link(room, link[0], link[1]);
	ft_free_split(&link);
}

void		ft_add_second_link(t_room **room, char *link1, char *link2)
{
	t_room	*r;
	t_link	*l;

	r = ft_find_room(room, link2);
	if (r->links == NULL)
	{
		if (r->links == NULL)
			r->links = ft_malloc_link(link1, room);
	}
	else
	{
		l = r->links;
		while (l->next != NULL)
			l = l->next;
		if (is_link_exist(r, link1))
			return ;
		l->next = ft_malloc_link(link1, room);
	}
}
