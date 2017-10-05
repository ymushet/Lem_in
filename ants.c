/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ants.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:24:16 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/05 15:47:56 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	ft_error(t_data *data)
{
    if (data->help != 1)
	    ft_printf("ERROR\n");
	ft_free_data(&data);
	exit(1);
}

void	ft_add_to_line(char **line, char **append)
{
	char *tmp;

	tmp = NULL;
	tmp = ft_strjoin(*line, *append);
	free(*line);
	*line = ft_strjoin(tmp, "\n");
	free(tmp);
}

int		ft_read_ants(int fd, t_data *data)
{
	char *line;
	long res;

	get_next_line(fd, &line);
	if (ft_get_line_type(line, data) == 1)
	{
		ft_add_to_line(&data->join, &line);
		ft_strdel(&line);
		get_next_line(fd, &line);
	}
	if (ft_is_str_digit(line))
	{
		res = ft_atoi(line);
		if (res > 0 && res <= INT_MAX)
		{
			ft_add_to_line(&data->join, &line);
			ft_strdel(&line);
			return ((int)res);
		}
	}
	ft_strdel(&line);
	ft_error(data);
	return (0);
}
