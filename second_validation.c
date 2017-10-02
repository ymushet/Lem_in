/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:48:27 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 15:52:40 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		read_start_end(char **line, t_room **rooms, t_data *data, int type)
{
	if ((type == 3 && data->end == 0) || (type == 2 && data->start == 0))
	{
		if (type == 2)
			data->start++;
		else
			data->end++;
		ft_strdel(line);
		get_next_line(data->fd, line);
		if (ft_is_room(*line))
		{
			if (check_room(*rooms, *line))
				return (1);
		}
	}
	return (0);
}

int		ft_second_validation(t_data *data)
{
	if (data->start == 1 && data->end == 1 &&
		data->ants > 0 && data->rcount >= 2)
		return (1);
	return (0);
}
