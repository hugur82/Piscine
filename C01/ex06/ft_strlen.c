#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
return(i);
}

int main (void)
{
printf("le nombre de caractere: %d\n",ft_strlen("Bonjour a tou comment allez vous"));
return(0);
}