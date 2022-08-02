#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    char *tmp;

    i = 0;
    while (src[i])
        i++;
    tmp = malloc(sizeof(char) * i + 1);
    i = 0;
    while (src[i])
    {
        tmp[i] = src[i];
        i++;
    }
    return(tmp);
}

int main(void)
{
    printf("%s",ft_strdup("Bonjour"));
    
}