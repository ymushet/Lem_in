#include "lem_in.h"

void ft_lem_in(int fd)
{
    t_room *rooms;
    t_data *data;

    rooms = NULL;
    data = ft_read_map(&rooms, fd);
    if (!ft_second_validation(data))
        ft_error(2);
    //printf("ok\n");
    ft_solve_map(data, rooms);
}

t_data *ft_read_map(t_room **rooms, int fd) //MAIN FUNCTION FOR READ, MALLOC AND VALIDATION. will return data to main (and create room);
{
    t_data *data;
    data = malloc(sizeof(t_data));
    data->end = 0;
    data->links = 0;
    data->start = 0;
    data->ants = ft_read_ants(fd);
    data->fd = fd;
    data->room_name = NULL;
    data->rcount = 0;
    ft_read_rooms(rooms, data);
    return (data);
}

void ft_read_rooms(t_room **rooms, t_data *data) //start - 2, end - 3, comment - 1, link - 4, room - 5
{
    char *line;
    int i;

    while (get_next_line(data->fd, &line))
    {
        i = ft_get_line_type(line);
        if (ft_is_valid(i, &line, rooms, data))
            ft_add_data(rooms, data, line, i);
        else
        {
            close(data->fd);
            break;
        }
        ft_strdel(&line);
    }
    ft_strdel(&line);
}

int     ft_is_valid(int i, char **line, t_room **rooms, t_data *data) //start - 2, end - 3, comment - 1, link - 4, room - 5
{
    if (i == 2 || i == 3)
        return (read_start_end(line, rooms, data, i)); //check in data for start/end count and return 0 if needed.
    else if (i == 5 && data->links == 0)
        return (check_room(*rooms, *line));
    else if (i == 4 && data->end == 1 && data->start == 1)
     {
        data->links++;
        return (check_link(rooms, *line));
     }
    else if (i == 1)
        return (1);
    return (0);
}