#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}
int main(void)
{
    ft_putstr("Salut comment va tu&é 12\n");
}