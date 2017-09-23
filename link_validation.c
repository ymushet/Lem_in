#include "lem_in.h"

int ft_is_correct_name(char *name)
{
    while (*name)
    {
        if (*name == 'L' || *name == '-' || *name == '#')
            return (0);
        name++;
    }
    return (1);
}

int	ft_is_link(char *str) //rewrite
{
    char **link;
    int i;

    link = ft_strsplit(str, '-');//FREE SPLIT
    i = 0;
    while(link[i] != NULL)
        i++;
    if(i != 2)
        return (0);
    i = 0;
    while(link[i] != NULL)
    {
        if (!ft_is_correct_name(link[i]))
            return  (0);
        i++;
    }
    return (1);
}