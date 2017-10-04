/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_path.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 17:35:49 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 17:44:03 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		ft_add_path(t_path **start, t_path **i)
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

int			is_common_rooms(t_link *path, t_link *i)
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

int			is_crossed(t_path **path, t_path *i)
{
	t_path	*tmp;

	tmp = *path;
	while (tmp != NULL)
	{
		if (is_common_rooms(tmp->way, i->way))
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

t_path		*ft_malloc_l(t_path **path)
{
	t_path	*start;

	start = malloc(sizeof(t_path));
	start->way = (*path)->way;
	start->length = (*path)->length;
	start->next = NULL;
	return (start);
}

void		ft_print_map(t_data *data, t_path **path)
{
	t_path	*start;
	t_path	*i;
	int		steps;

	start = ft_malloc_l(path);
	i = (*path)->next;
	steps = start->length;
	if (steps < data->ants)
		while (i != NULL)
		{
			if (!is_crossed(&start, i))
			{
				ft_add_path(&start, &i);
				steps += i->length;
			}
			if (steps >= data->ants)
				break ;
			i = i->next;
		}
	ft_print_path(data, start);
	if (data->path == 1)
		ft_show_path(start);
	ft_free_start(&start);
}
