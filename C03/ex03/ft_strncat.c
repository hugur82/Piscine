#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned    i;
    unsigned    j;

    i = 0;
    while(dest[i])
        i++;
    j = 0;
    while(j < nb && src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    return(dest);
}
int main(void)
{
    char mot1[125]="salut";
    char mot2[125]="";
    
    printf("%s\n",ft_strncat(mot1," a toi l'ami", 8));
    printf("%s\n",ft_strncat(mot2," a toi l'ami", 0));
}