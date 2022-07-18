#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 == *s2 && *s1 && *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main(void)
{
    printf("%d \n", ft_strcmp("salut", "salut"));
    printf("%d \n", ft_strcmp("salut1", "salut"));
    printf("%d \n", ft_strcmp("salut", "salut3"));
    printf("%d \n", ft_strcmp("salut", "sblut3"));
    printf("%d \n", ft_strcmp("salut", "Salut"));
}