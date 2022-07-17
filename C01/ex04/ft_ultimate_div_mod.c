#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = *a % *b;
    *a /= *b;
    *b = tmp;
}

int main(void)
{
    int a;
    int b;

    a = 13;
    b = 5;

    printf("a = %d | b = %d\n", a,b);
    ft_ultimate_div_mod(&a, &b);
    printf("div a = %d | mod b = %d\n", a,b);

}