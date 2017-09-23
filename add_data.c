#include "lem_in.h"

/*
 * //start - 2, end - 3, comment - 1, link - 4, room - 5
 */

/*
 * возможен лик при ft_add_link(rooms, ft_strsplit(line, '-'));
 * покольку полученный двумерный массив не имеет никакого указателя!
 */



void ft_add_data(t_room **rooms, t_data *data, char *line, int i)//ДОБАВИТЬ ЗАПИСЬ ВСЕХ ИМЕН КОМНАТ В data->rooms_name;
{
    if (i == 4)
        ft_add_link(rooms, line);
    if (i == 5 || i == 2 || i == 3)
    {
        ft_add_room(rooms, line, i);
        data->rcount++;
    }
}