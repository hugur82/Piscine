#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    while(*str)
    {
        if (*str < 'a' || *str > 'z' )
            return (0);
        str++;
    }
    return (1);
}

int main(void)
{
    printf("1 : %d\n", ft_str_is_lowercase("azertqyqsudycwxouhifspidqhiaz"));
    printf("1 : %d\n", ft_str_is_lowercase("aspidqhiaz"));
    printf("0 : %d\n", ft_str_is_lowercase("azertqyqsudycw'xouhifspidqhiaz"));
    printf("0 : %d\n", ft_str_is_lowercase("azertqyqsudycwxouhifsApidqhiaz"));
    
    return(0);
}