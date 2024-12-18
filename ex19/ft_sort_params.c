#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_swap_argv(char **a, char **b);
void    ft_output_argv(char **argv, int argc);

int main(int argc, char *argv[])
{
    int i;
    int y;
    int x;
    int flag;

    i = 0;
    y = 1;
    x = 1;
    flag = 1;
    while (flag == 1)
    {
        flag = 0;
        while (x < argc - 1)
        {
            x += 1;
            while (argv[y][i] && argv[x][i])
            {
                if (argv[y][i] < argv[x][i])
                {

                    ft_swap_argv(&argv[y], &argv[x]);
                    flag++;
                    break;
                }
                i++;
            }
            i = 0;
        }  
    }
    printf("%s\n", argv[1]);
    printf("%s\n", argv[2]);
    printf("%s\n", argv[3]);
    printf("%s\n", argv[4]);
    exit(0);
    ft_output_argv(argv, argc);
}
  

void    ft_swap_argv(char **a, char **b)
{
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ft_output_argv(char **argv, int argc)
{
    int i;
    int x;

    i = 0;
    x = 1;
    while (x < argc)
    {
        i = 0;
        while (argv[x][i])
        {
            write(1, &argv[x][i], 1);
            i++;
        }
        write(1, "\n", 1);
        x++;
    }
}