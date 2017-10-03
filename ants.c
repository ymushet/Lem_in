/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ants.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:24:16 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 16:27:29 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	ft_error(int i)
{
	ft_printf("exit code %d\n", i);
	exit(i);
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
	char *tmp;

	tmp = NULL;
	get_next_line(fd, &line);
	while (ft_get_line_type(line) == 1)
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
			ft_add_to_line(&(data->join), &line);
			return ((int) res);
		}
	}
	else
	{	ft_strdel(&line);
		ft_error(1);
	}
	return (0);
}
