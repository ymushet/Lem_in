/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lem2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:36:29 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 15:40:56 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	ft_print_path(t_data *data, t_path *path)
{
	int	a_arr[data->ants];
	int	i;

	i = 0;
	while (i < data->ants)
		a_arr[i++] = 0;
	while (is_ants(a_arr, data->ants))
	{
		i = 0;
		while (i < data->ants)
		{
			if (a_arr[i] != 1)
			{
				if (!ft_make_step(i + 1, a_arr, &path))
					break;
			}
			i++;
		}
		data->count++;
		write(1, "\n", 1);
	}
}
