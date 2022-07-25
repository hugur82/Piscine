#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    if (power == 1)
        return(nb);
    return(nb * ft_recursive_power( nb, power - 1));
}

int main(void)
{
    printf(" 0 ^ -1 = %6d \n",ft_recursive_power(0,-1));
    printf(" 0 ^  0 = %6d \n",ft_recursive_power(0,0));
    printf(" 0 ^  1 = %6d \n",ft_recursive_power(0,1));
    printf(" 0 ^  2 = %6d \n",ft_recursive_power(0,2));
    printf("-2 ^  3 = %6d \n",ft_recursive_power(-2,3));
    printf(" 3 ^  0 = %6d \n",ft_recursive_power(3,0));
    printf(" 3 ^  1 = %6d \n",ft_recursive_power(3,1));
    printf(" 3 ^  2 = %6d \n",ft_recursive_power(3,2));
    printf(" 3 ^  3 = %6d \n",ft_recursive_power(3,3));
    printf(" 5 ^  5 = %6d \n",ft_recursive_power(5,5));
    
}