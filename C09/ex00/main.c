#include <stdio.h>

int ft_strcmp(char *s1, char *s2);
int ft_strlen(char *str);
void  ft_putstr(char *str);
void ft_swap(int *a, int *b);
void ft_putchar(char c);

int main(void)
{

    char *str;
    int a;
    int b;

    a = 1;
    b = 23;
    ft_putchar('a');
    ft_putchar('\n');
    printf (" a = %d et b = %d \n", a, b);
    ft_swap(&a, &b);
    printf (" a = %d et b = %d \n", a, b);
    str="salut";
    ft_putstr(str);
    ft_putchar('\n');
    printf("longueur est égal à %d\n", ft_strlen(str));

    printf("s1 - s2 = %d\n", ft_strcmp("salut", "salut"));
    return (0);

}