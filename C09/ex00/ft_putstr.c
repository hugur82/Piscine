#include <unistd.h>


void  ft_putstr(char *str)
{
    while(*str)
    {
        write (1,str,1);
        str++;
    }
}
/*
int main(void)
{
    char *str;

    str = "bonjour";
    ft_putstr(str);
    return (0);
}
*/