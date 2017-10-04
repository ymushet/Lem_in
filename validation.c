/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:44:09 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 15:47:46 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		ft_is_str_digit(char *str)
{
	int i;

	i = 0;
	if (str == NULL || str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int		check_limits(long n)
{
	if (n < INT_MIN || n > INT_MAX)
		return (0);
	return (1);
}

int		ft_check_coord(char **str)
{
	int		i;
	char	**tmp;
	long	x;
	long	y;

	i = 0;
	tmp = str;
	while (*tmp)
	{
		if (i > 2)
			return (0);
		tmp++;
		i++;
	}
	if (!ft_is_str_digit(str[1]) || !ft_is_str_digit(str[2]))
		return (0);
	x = ft_atoi(str[1]);
	y = ft_atoi(str[2]);
	if (i != 3 || !check_limits(x) || !check_limits(y))
		return (0);
	return (1);
}
