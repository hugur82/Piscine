#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}
/*
int main()
{
    char *str = "salut";

    while(*str)
    {
        write(1,str,1);
        str++;
    }
}
*/