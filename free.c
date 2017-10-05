/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:50:09 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/05 16:04:45 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	ft_free_split(char ***arr)
{
	char	**f_str;
	int		i;

	i = 0;
	f_str = *arr;
	while (f_str[i] != NULL)
	{
		ft_strdel(&f_str[i]);
		i++;
	}
	free(*arr);
	*arr = NULL;
}

void	ft_free_links(t_link **links)
{
	t_link	*l;
	t_link	*tmp;

	l = *links;
	while (l != NULL)
	{
		tmp = l;
		l = l->next;
		free(tmp);
	}
	*links = NULL;
}

void	ft_free_rooms(t_room **rooms)
{
	t_room	*tmp;
	t_room	*tmp2;

	tmp = *rooms;
	while (tmp != NULL)
	{
		ft_strdel(&tmp->name);
		ft_free_links(&tmp->links);
		tmp2 = tmp;
		tmp = tmp->next;
		free(tmp2);
	}
	*rooms = NULL;
}

void	ft_free_path(t_path **path)
{
	t_path	*p;
	t_path	*tmp;

	p = *path;
	while (p != NULL)
	{
		tmp = p;
		ft_free_links(&tmp->way);
		p = p->next;
		free(tmp);
	}
	*path = NULL;
}

void	ft_free_data(t_data **data)
{
	t_data	*tmp;

	tmp = *data;
	tmp->a_path = NULL;
	ft_strdel(&tmp->join);
	free(*data);
	*data = NULL;
}
