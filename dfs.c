/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 17:50:48 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 17:58:33 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	push(t_link **que, t_room **start)
{
	t_link	*q;
	t_link	*ql;

	q = *que;
	if (*que == NULL)
	{
		*que = malloc(sizeof(t_link));
		(*que)->room = *start;
		(*que)->next = NULL;
	}
	else
	{
		ql = q;
		while (q != NULL)
		{
			if (q->room->id == (*start)->id)
				return ;
			ql = q;
			q = q->next;
		}
		ql->next = malloc(sizeof(t_link));
		ql->next->room = *start;
		ql->next->next = NULL;
	}
}

void	pop_last(t_link **que)
{
	t_link	*tmp;
	t_link	*tail;

	if (*que != NULL)
	{
		tmp = *que;
		tail = tmp;
		while (tmp->next != NULL)
		{
			tail = tmp;
			tmp = tmp->next;
		}
		tmp->room->visited = 0;
		free(tmp);
		tail->next = NULL;
	}
}

void	dfs(t_room *start, t_link **que, t_path **path)
{
	t_link	*neigbor;

	if (que != NULL)
	{
		start->visited = 1;
		neigbor = start->links;
		push(que, &start);
		while (neigbor != NULL)
		{
			if (start->type == 3)
			{
				write_path(que, path);
				pop_last(que);
				return ;
			}
			if (neigbor->room->visited != 1)
				dfs(neigbor->room, que, path);
			neigbor = neigbor->next;
		}
		pop_last(que);
	}
}

int		ft_calc_length(t_link *path)
{
	int		i;
	t_link	*p;

	i = 0;
	p = path;
	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}

void	write_path(t_link **que, t_path **path)
{
	t_path	*p;

	p = ft_malloc_path();
	p->way = ft_copy_que(que);
	p->length = ft_calc_length(p->way);
	if (*path == NULL)
	{
		(*path) = p;
	}
	else
	{
		ft_insert_path(p, path);
	}
}
