#include <stdio.h>

int ft_count_if(char **tab, int (*f)(char*))
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (*tab[i])
    {
        if (f(tab[i]) == 1)
            count++;
        tab++;
    }
    return (count);
}