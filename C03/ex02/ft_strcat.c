#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
        
    i = 0;
    while (dest[i])
        i++;
    while (*src)
    {
        dest[i] = *src;
        i++;
        src++;
    }
    dest[i] = '\0';
    return (dest);
}
int main(void)
{
    char dest[125]="salut";
    printf("%s\n",ft_strcat(dest," a toi, tu va bien"));
    char dest1[125]="";
    printf("%s\n",ft_strcat(dest1," a toi, tu va bien"));
}