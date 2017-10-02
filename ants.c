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

int		ft_read_ants(int fd)
{
	char *line;
	long res;

	get_next_line(fd, &line);
	if (ft_is_str_digit(line))
	{
		res = ft_atoi(line);
		if (res > 0 && res <= INT_MAX)
			return ((int)res);
	}
	else
	{
		close(fd);
		ft_printf("Ants input must be unsigned int");
		ft_error(1);
	}
	return (0);
}
