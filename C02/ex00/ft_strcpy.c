#include <unistd.h>

char *ft_strcpy(char *dest, char *src){
    int i;

    i = 0;
    while(src[i])
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return (dest);
}

void ft_putstr(char *str)
{
    while(*str)
    {
        write (1, str, 1);
        str++;
    }
}
int main(void)
{
    char dest[252]="Salut";// important de mettre assez d'espace sinon defaut de segmentation
    char *src="changement reussi";

    ft_putstr(dest);
    ft_putstr("\n");
    ft_putstr(src);
    ft_putstr("\n");
    ft_strcpy(dest, src);
    ft_putstr(dest);
    ft_putstr("\n");
    ft_putstr(src);
    ft_putstr("\n");
}