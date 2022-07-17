
#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int x;

    x = 41;
    ft_ft(&x);
    printf("x = %d\n", x);
}