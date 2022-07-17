#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    while(*str)
    {
        if (*str < 48 || *str > 57)
            return (0);
        str++;
    }
    return (1);
}
int main(void)
{
    printf("1 : %d\n",ft_str_is_numeric("1982"));
    printf("0 : %d\n",ft_str_is_numeric("19 82"));
    printf("0 : %d\n",ft_str_is_numeric("1j982"));
    printf("0 : %d\n",ft_str_is_numeric("1982 11"));
    printf("1 : %d\n",ft_str_is_numeric("0"));
    printf("1 : %d\n",ft_str_is_numeric("11878686494646946982"));
    return (0);
}