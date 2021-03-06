/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 15:48:52 by ymushet           #+#    #+#             */
/*   Updated: 2016/12/03 18:26:07 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	c;

	c = '\0';
	i = 0;
	ptr = s;
	if (n > 0)
		while (i < n)
		{
			*ptr = c;
			ptr++;
			i++;
		}
}
