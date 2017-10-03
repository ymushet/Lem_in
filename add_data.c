/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 16:00:43 by ymushet           #+#    #+#             */
/*   Updated: 2017/09/28 16:03:07 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	ft_add_data(t_room **rooms, t_data *data, char *line, int i)
{
	if (i == 4)
		ft_add_link(rooms, line);
	if (i == 5 || i == 2 || i == 3)
	{
		ft_add_room(rooms, line, i);
		data->rcount++;
	}
}
