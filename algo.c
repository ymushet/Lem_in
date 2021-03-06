/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:14:39 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/05 15:54:14 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_path		*ft_malloc_path(void)
{
	t_path	*p;

	p = malloc(sizeof(t_path));
	p->length = 0;
	p->way = NULL;
	p->next = NULL;
	return (p);
}

void		ft_solve_map(t_data *data, t_room *room)
{
	t_room	*start;
	t_link	*que;
	t_path	*path;

	path = NULL;
	start = ft_get_start(room);
	que = NULL;
	dfs(start, &que, &path);
	if (path == NULL)
	{
		printf("ERROR\n");
		return ;
	}
	ft_printf("%s\n", data->join);
	ft_print_map(data, &path);
	data->count == 1 ? data->count++ : 0;
	if (data->count == 1)
		ft_printf("STEPS: %d\n", data->scount);
	if (data->ant > 0)
	{
		ft_printf("##ANT %d used this way:\n", data->ant);
		ft_print_way(data->a_path);
	}
	ft_free_path(&path);
}

t_room		*ft_get_start(t_room *room)
{
	t_room	*r;
	t_room	*start;
	int		tmp;

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
