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
/*
int main(void)
{
    printf("s1 - s2 = %d\n", ft_strcmp("salut", "salut"));
    return (0);
}*/