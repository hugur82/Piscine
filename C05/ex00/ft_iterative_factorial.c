#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;

    i = 1;
    if (nb <= 0)
        return(0);
    while (nb != 1)
    {
    i *= nb;
    nb--;
    }
return (i);
}

int main(void)
{
    printf("-5 => %d\n", ft_iterative_factorial(-5));
    printf("0 => %d\n", ft_iterative_factorial(0));
    printf("3 => %d\n", ft_iterative_factorial(3));
    printf("4 => %d\n", ft_iterative_factorial(4));
    printf("5 => %d\n", ft_iterative_factorial(5));
    printf("10 => %d\n", ft_iterative_factorial(10));
    return (0);
}