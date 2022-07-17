#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        write (1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    ft_putstr("- Bonjour a toi , xomment va tu ?\n- moi je vais bien merci!\n");
    return(0);
}