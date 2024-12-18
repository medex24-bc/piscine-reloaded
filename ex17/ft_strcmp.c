#include <stdio.h>

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

/*int main()
{
    printf("%d\n", ft_strcmp("abc", "abd"));
    printf("%d\n", ft_strcmp("abc", "abc"));
    printf("%d\n", ft_strcmp("abd", "abc"));
}*/