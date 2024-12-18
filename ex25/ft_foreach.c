
/*void ft_putnbr(int n)
{
    if (n == -2147483648) // Cas particulier pour INT_MIN
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) 
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);  // Appel récursif pour afficher les chiffres
    write(1, &((char[]){n % 10 + '0'}), 1); // Affichage du dernier chiffre
}*/


void ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}

/*int main()
{
    int length = 5;
    int tab[] = {1, 2, 3, 4, 5};
    ft_foreach(tab, length, &ft_putnbr);
}*/