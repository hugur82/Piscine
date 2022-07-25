#include <stdio.h>

int ft_atoi(char *str)
{
    int isnegativ;
    int num;

    num = 0;
    isnegativ = 1;
    while(*str == ' ' || *str == '\f' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v')
        str++;

    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            isnegativ *= -1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        num = (10 * num) + *str - 48;
        str++;
    }
    return (num * isnegativ);
}

int main(void)
{
    printf("%d",ft_atoi("    ---+--+1234ab567"));
    return (0);
}