#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    int i;
    int len;
    char *new_memory_adresse;

    i = 0;
    len = ft_strlen(src);
    new_memory_adresse = (char *)malloc(sizeof(char) * (len + 1));
    if (new_memory_adresse == NULL)
        return (NULL);
    while (src[i] && i < len)
    {
        new_memory_adresse[i] = src[i];
        i++;
    }
    new_memory_adresse[i] = '\0';
    return (new_memory_adresse);
}

/*int main()
{
    char *str = "salut";
    char *new_memory_adresse = str;
    printf("before:\n\tmemory place: %p\n\tstring: %s\n", new_memory_adresse, new_memory_adresse);
    new_memory_adresse = ft_strdup(str);
    printf("after:\n\tmemory place: %p\n\tstring: %s\n", new_memory_adresse, new_memory_adresse);
}*/