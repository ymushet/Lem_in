/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:30:02 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 16:41:05 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		ft_is_correct_name(char *name)
{
	int i;

	i = 0;
	while (name[i] != '\0')
	{
		if (name[i] == 'L' || name[i] == '-' || name[i] == '#')
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_link(char *str)
{
	char	**link;
	int		i;

	link = ft_strsplit(str, '-');
	i = 0;
	while (link[i] != NULL)
		i++;
	if (i != 2)
	{
		ft_free_split(&link);
		return (0);
	}
	i = 0;
	while (link[i] != NULL)
	{
		if (!ft_is_correct_name(link[i]))
		{
			ft_free_split(&link);
			return (0);
		}
		i++;
	}
	ft_free_split(&link);
	return (1);
}

void	ft_free_start(t_path **path)
{
	t_path	*p;
	t_path	*tmp;

	p = *path;
	while (p != NULL)
	{
		tmp = p;
		free(tmp);
		p = p->next;
	}
	*path = NULL;
}
