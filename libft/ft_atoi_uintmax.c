#include "libft.h"

uintmax_t	ft_atoi_uintmax(char *str)
{
    size_t				i;
    uintmax_t	        res;
    int					sign;

    sign = 1;
    res = 0;
    i = 0;
    if (str[i] == '-')
        return (0);
    while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    {
        res = res * 10 + (str[i] - '0');
        if ((res > UINTMAX_MAX || (res == 922337203685477580
                                          && (str[i] - '0') > 7)) && sign == 1)
            return (0);
        else if ((res > 922337203685477580 || (res == 922337203685477580
                                               && (str[i] - '0') > 8)) && sign == -1)
            return (0);
        i++;
    }
    return (res);
}