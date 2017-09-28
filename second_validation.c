#include "lem_in.h"

/*
 * read_start_end //check in data for start/end count and return 0 if needed.
 *
 */

int read_start_end(char **line, t_room **rooms, t_data *data, int type)//start - 2, end - 3, comment - 1, link - 4, room - 5
{
    if ((type == 3 && data->end == 0) || (type == 2 && data->start == 0))
    {
        if (type == 2)
            data->start++;
        else
            data->end++;
        ft_strdel(line);
        get_next_line(data->fd, line);
        if (ft_is_room(*line))
        {
            if (check_room(*rooms, *line))
            return (1);
        }
    }
    return (0);
}

int ft_second_validation(t_data *data)
{
    if (data->start == 1 && data->end == 1 && data->ants > 0 && data->rcount >= 2)
        return (1);
    return (0);
}