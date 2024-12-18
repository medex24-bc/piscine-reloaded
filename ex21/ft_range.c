#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *array;
    int i;

    i = 0;
    array = (int *)malloc(sizeof(int) * (max - min));
    if (array == NULL)
        return (array);
    printf("test");
    while (i < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    return (array);
}

int main()
{
    int min = 5;
    int max = 13;
    int *array = ft_range(min, max);

    int i = 0;
    while (array)
    {
        printf("%d\n", *array);
       array++;
    }
    return (0);
}