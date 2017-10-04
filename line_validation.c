/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:42:43 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/04 16:57:06 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		ft_get_line_type(char *str, t_data *data)
{
	if (str == NULL)
		return (-1);
	if (!ft_strcmp(str, "##PATH"))
	{
		data->path = 1;
		return (1);
	}
	if (!ft_strcmp(str, "##COUNT"))
	{
		data->count = 1;
		return (1);
	}
	if (!ft_strcmp(str, "##ALL"))
	{
		data->path = 1;
		data->count = 1;
		return (1);
	}
	else
		return (ft_get_line_type2(str));
}

int 	ft_get_line_type2(char *str)
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
	int		i;
	int		res;

	i = 0;
	str = ft_strsplit(line, ' ');
	while (str[i] != NULL)
		i++;
	if (i != 3)
	{
		ft_free_split(&str);
		return (0);
	}
	if (ft_check_coord(str))
	{
		res = ft_is_room_2(str);
		ft_free_split(&str);
		return (res);
	}
	ft_free_split(&str);
	return (0);
}

int		ft_is_room_2(char **tmp)
{
	char	*str;
	int		i;

	str = tmp[0];
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'L' || str[i] == '-' || str[i] == '#')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
