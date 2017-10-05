/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:40:25 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/05 15:52:16 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	ft_show_path(t_path *path)
{
	t_path *p;

	p = path;
	while (p != NULL)
	{
		ft_print_way(p->way);
		p = p->next;
	}
}

void	ft_print_way(t_link *way)
{
	t_link *w;

	w = way;
	while (w != NULL)
	{
		printf("%s -> ", w->room->name);
		w = w->next;
	}
}

void	ft_print_usage(void)
{
	ft_printf("Enter ##HELP to see this usage.\n");
	ft_printf("##COUNT - prints steps count.\n");
	ft_printf("##PATH - prints used paths.\n");
	ft_printf("##ALL - use all flags at once.\n");
	ft_printf("##ANT - print ant's path.\n");
	ft_printf("To use ##ANT flag print number of needed ant after flag.\n");
	ft_printf("Note that you have to enter number of ants");
	ft_printf("before using this flag.");
	ft_printf("In other case this may result of undefined behavior\n");
	ft_printf("GOOD LUCK USING LEM_IN\n");
}

int		ft_read_flag_ant(t_data *data)
{
	char	*line;
	char	*tmp;
	long	a;

	tmp = ft_strdup("##ANT");
	get_next_line(0, &line);
	a = ft_atoi(line);
	if (a > 0 && a <= data->ants)
	{
		ft_add_to_line(&data->join, &tmp);
		ft_strdel(&tmp);
		ft_add_to_line(&data->join, &line);
		data->ant = (int)a;
		ft_strdel(&line);
		return (6);
	}
	ft_strdel(&tmp);
	printf("Please, see ##HELP for usage.\n");
	ft_strdel(&line);
	return (0);
}
