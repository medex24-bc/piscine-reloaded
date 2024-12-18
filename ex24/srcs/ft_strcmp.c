#include "../includes/libft.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    if (*s1 < *s2)
        return (-1);
    if (*s1 > *s2)
        return (1);
    return (0);
}