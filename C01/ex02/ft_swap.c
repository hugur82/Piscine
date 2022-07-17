#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x, y;

    x = 2;
    y = 4;
printf("x = %d | y = %d\n", x, y);
ft_swap(&x, &y);
printf("x = %d | y = %d\n", x, y);
return (0);
}