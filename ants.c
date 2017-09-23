#include "lem_in.h"

void ft_error(int i)
{
    ft_printf("exit code %d\n", i);
    exit(i);
}

int ft_read_ants(int fd)
{
    char *line;
    long res;

    get_next_line(fd,&line);
    if(ft_is_str_digit(line))
    {
        res = ft_atoi(line);
        if(res > 0 && res <= INT_MAX)
            return ((int)res);
    }
    else {
        close(fd);
        ft_error(1);
    }//first string must be number of ants
    return (0);
}