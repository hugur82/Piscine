#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
/*
int main(void){
int a;
int b;

a = 1;
b = 23;
printf (" a = %d et b = %d \n", a, b);
ft_swap(&a, &b);
printf (" a = %d et b = %d \n", a, b);
}
*/
