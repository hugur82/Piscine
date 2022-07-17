#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int div;
    int mod;

    ft_div_mod(12,5,&div,&mod);
    printf("12/5 = %d  |  12 %% 5 = %d", div, mod);
    return (0);
}