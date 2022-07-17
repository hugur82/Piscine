#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while(*str)
    {
        if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
            return (0);
        str++;
    }
    return (1);
}

int main(void)
{
    printf("0 : %d\n",ft_str_is_alpha("1ermot"));
     printf("0 : %d\n",ft_str_is_alpha("erm ot"));
     printf("1 : %d\n",ft_str_is_alpha("lermot"));
     printf("1 : %d\n",ft_str_is_alpha("cebomotermot"));
     printf("0 : %d\n",ft_str_is_alpha("1e*rmot"));
    return (0);
}