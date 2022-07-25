#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
    return (1);
    if (index == 1)
    return (2);
    return (ft_fibonacci(index - 1)+ ft_fibonacci(index -2));
}

int main(void)
{
    printf("4 : %d\n",ft_fibonacci(4));
    printf("5 : %d\n",ft_fibonacci(5));
    printf("8 : %d\n",ft_fibonacci(8));
    printf("9 : %d\n",ft_fibonacci(9));
    
}