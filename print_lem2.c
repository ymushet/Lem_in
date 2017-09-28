#include "lem_in.h"

void ft_print_path(unsigned int ants, t_path *path)
{
    int a_arr [ants];
    int i;
    i = 0;

    while (i < ants)
        a_arr[i++] = 0;
    while (is_ants(a_arr, ants))
    {
        i = 0;
        while (i < ants)
        {
            if (a_arr[i] != 1)
                if (!ft_make_step(i + 1, a_arr, &path))
                    break ;
            i++;
        }
        write(1, "\n", 1);
    }
}