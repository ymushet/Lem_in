/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:26:48 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/05 16:03:43 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			is_ants(int *a_arr, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (*(a_arr + j++) != 1)
			return (1);
	}
	return (0);
}

t_link		*ft_find_ant(int a_num, t_path **path)
{
	t_path	*p;
	t_link	*w;

	p = *path;
	while (p != NULL)
	{
		w = p->way;
		while (w != NULL)
		{
			if (w->room->ant == a_num)
				return (w);
			w = w->next;
		}
		p = p->next;
	}
	return (NULL);
}

int			ft_move_thread(t_link *a_room, int *a_arr, int a_num)
{
	if (a_room->next != NULL && a_room->next->room->ant == 0)
	{
		a_room->next->room->ant = a_num;
		a_room->room->ant = 0;
		ft_printf("L%d-%s ", a_num, a_room->next->room->name);
		if (a_room->next->room->type == 3)
		{
			*(a_arr + a_num - 1) = 1;
			a_room->next->room->ant = 0;
		}
		return (1);
	}
	return (0);
}

int			ft_choose_and_move_thread(t_path **path, int a_num,
										int *arr, t_data *data)
{
	t_path	*p;

	p = *path;
	while (p != NULL)
	{
		if (p->way->next->room->ant == 0)
		{
			if (a_num == data->ant)
				data->a_path = p->way;
			return (ft_move_thread(p->way, arr, a_num));
		}
		p = p->next;
	}
	return (0);
}

int			ft_make_step(int a_num, int *arr, t_path **path, t_data *data)
{
	t_link *a_room;

	if ((a_room = ft_find_ant(a_num, path)) != NULL)
		return (ft_move_thread(a_room, arr, a_num));
	else
		return (ft_choose_and_move_thread(path, a_num, arr, data));
}
