#include "lem_in.h"

int		ft_is_str_digit(char *str)
{
    if (str == NULL || str[0] == '\0')
        return (0);
    while (*str)
    {
        if (ft_isdigit(*str))
            str++;
        else
            return (0);
    }
    return (1);
}

int check_limits(long n)
{
    if (n < INT_MIN || n > INT_MAX)
        return (0);
    return (1);
}

int ft_check_coord(char **str)
{
    int i;
    char **tmp;
    long x;
    long y;

    i = 0;
    tmp = str;
    while(*tmp)
    {
        if (i > 2)
            return (0);
        tmp++;
        i++;
    }
    if (!ft_is_str_digit(str[1]) || !ft_is_str_digit(str[2]))
        return (0);
    x = ft_atoi(str[1]);
    y = ft_atoi(str[2]);
    if (i != 3 || !check_limits(x) || !check_limits(y))
        return (0);
    return (1);
}