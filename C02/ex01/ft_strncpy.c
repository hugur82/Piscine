#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i=0;
    while (src[i] && i < n )
    {
        dest[i] = src [i];
        i++;
    }
    dest[i]= '\0';
}
void ft_putstr(char *str)
{
    while(*str)
    {
        write (1 , str, 1);
        str++;
    }
}

int main (void)
{
    char dest[250]="1er mot";
    char src[250]="le mot a copier";
    int n;
    
    n = 10;
    ft_putstr(dest);
    ft_putstr("\n");
    ft_putstr(src);
    ft_putstr("\n");
    ft_strncpy(dest,src,n);
    ft_putstr("\n");
    ft_putstr(dest);
    ft_putstr("\n");
    ft_putstr(src);
    ft_putstr("\n");
}