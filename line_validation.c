/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:42:43 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 16:48:38 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		ft_get_line_type(char *str)
{
	if (!ft_strcmp(str, "##start"))
		return (2);
	else if (!ft_strcmp(str, "##end"))
		return (3);
	else if (str[0] == '#')
		return (1);
	else if (ft_is_link(str))
		return (4);
	else if (ft_is_room(str))
		return (5);
	return (-1);
}

int		ft_is_room(char *line)
{
	char	**str;
	char	*tmp;
	int		i;

	i = 0;
	str = ft_strsplit(line, ' ');
	tmp = str[0];
	while (str[i] != NULL)
		i++;
	if (i != 3)
		return (0);
	if (ft_check_coord(str))
	{
		while (*tmp)
		{
			if (*tmp == 'L' || *tmp == '-' || *tmp == '#')
				return (0);
			tmp++;
		}
		return (1);
	}
	return (0);
}
