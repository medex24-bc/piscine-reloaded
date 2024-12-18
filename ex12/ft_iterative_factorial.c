#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int x;

    x = nb - 1;
    while (x > 0)
    {
        nb = nb * x;
        x--;
    }
    return (nb);
}

/*int main()
{
    printf("%d\n", ft_iterative_factorial(8));
    return (0);
}*/