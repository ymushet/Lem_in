/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_room.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:53:47 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 16:14:16 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_room	*ft_malloc_new_room(char *line, int type)
{
	t_room	*room;
	char	**tmp;

	tmp = ft_strsplit(line, ' ');
	room = malloc(sizeof(t_room));
	room->id = 0;
	room->name = ft_strdup(tmp[0]);
	room->x = (int)ft_atoi(tmp[1]);
	room->y = (int)ft_atoi(tmp[2]);
	room->next = NULL;
	room->links = NULL;
	room->type = type;
	room->visited = 0;
	room->ant = 0;
	ft_free_split(&tmp);
	return (room);
}

void	ft_add_room(t_room **rooms, char *line, int type)
{
	t_room	*r;

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

int		check_room(t_room *room, char *line)
{
	t_room	*r;
	char	**l;
	long	x;
	long	y;

	l = ft_strsplit(line, ' ');
	r = room;
	x = ft_atoi(l[1]);
	y = ft_atoi(l[2]);
	while (r != NULL)
	{
		if ((!ft_strcmp(l[0], r->name)) || (r->x == x && r->y == y))
		{
			ft_free_split(&l);
			return (0);
		}
		r = r->next;
	}
	ft_free_split(&l);
	return (1);
}

int		is_link_exist(t_room *room, char *line)
{
	t_link	*l;

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
