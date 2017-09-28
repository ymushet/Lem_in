#include "lem_in.h"

void ft_free_split(char ***arr)
{
    char **f_str;
    int i;

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

void ft_free_data(t_data **data)
{

}