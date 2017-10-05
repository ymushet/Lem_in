/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymushet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:05:09 by ymushet           #+#    #+#             */
/*   Updated: 2017/10/05 16:05:23 by ymushet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void		ft_lem_in(int fd)
{
	t_room	*rooms;
	t_data	*data;

	rooms = NULL;
	data = ft_read_map(&rooms, fd);
	if (!ft_second_validation(data))
		ft_error(data);
    ft_solve_map(data, rooms);
	ft_free_rooms(&rooms);
	ft_free_data(&data);
}

t_data		*ft_read_map(t_room **rooms, int fd)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	data->end = 0;
	data->links = 0;
	data->start = 0;
	data->fd = fd;
	data->count = 0;
	data->path = 0;
	data->rcount = 0;
	data->scount = 0;
	data->ant = 0;
	data->a_path = NULL;
	data->join = NULL;
	data->ants = 0;
    data->help = 0;
	data->ants = ft_read_ants(fd, data);
	ft_read_rooms(rooms, data);
	return (data);
}

void		ft_read_rooms(t_room **rooms, t_data *data)
{
	char	*line;
	int		i;

	while (get_next_line(data->fd, &line))
	{
		ft_add_to_line(&data->join, &line);
		i = ft_get_line_type(line, data);
		if (ft_is_valid(i, &line, rooms, data))
		{
			ft_add_data(rooms, data, line, i);
		}
		else
		{
			close(data->fd);
			break ;
		}
		ft_strdel(&line);
	}
	ft_strdel(&line);
}

int			ft_is_valid(int i, char **line, t_room **rooms, t_data *data)
{
	if (i == 2 || i == 3)
		return (read_start_end(line, rooms, data, i));
	else if (i == 5 && data->links == 0)
		return (check_room(*rooms, *line));
	else if (i == 4 && data->end == 1 && data->start == 1)
	{
		data->links++;
		return (check_link(rooms, *line));
	}
	else if (i == 1 || i == 6)
		return (1);
	return (0);
}
