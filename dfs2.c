/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 17:58:57 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/02 18:04:35 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		insert(t_path **first, t_path **second,
								t_path **insert, t_path **path)
{
	if (*first == NULL)
	{
		(*insert)->next = *path;
		*path = *insert;
	}
	else
	{
		(*first)->next = *insert;
		(*insert)->next = *second;
	}
}

void		ft_insert_path(t_path *copy, t_path **path)
{
	t_path	*tmp;
	t_path	*prev;

	prev = NULL;
	tmp = *path;
	while (tmp->next != NULL)
	{
		if (tmp->length <= copy->length)
		{
			insert(&prev, &tmp, &copy, path);
			return ;
		}
		prev = tmp;
		tmp = tmp->next;
	}
	tmp->next = copy;
}

t_link		*ft_create_link(void)
{
	t_link *link;

	link = malloc(sizeof(t_link));
	link->room = NULL;
	link->next = NULL;
	return (link);
}

t_link		*ft_malloc_empty_path(t_link *que)
{
	t_link *q;
	t_link *p;
	t_link *head;

	q = que;
	head = ft_create_link();
	p = head;
	while (q->next != NULL)
	{
		p->next = malloc(sizeof(t_link));
		p->next->room = NULL;
		p->next->next = NULL;
		p = p->next;
		q = q->next;
	}
	return (head);
}

t_link		*ft_copy_que(t_link **que)
{
	t_link	*q;
	t_link	*path;
	t_link	*p;

	q = *que;
	path = ft_malloc_empty_path(*que);
	p = path;
	while (q != NULL)
	{
		p->room = q->room;
		p = p->next;
		q = q->next;
	}
	return (path);
}
