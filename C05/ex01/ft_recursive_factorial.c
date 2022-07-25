#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb <= 0)
        return(0);
    if (nb == 1)
    return (1);
    
    return(ft_recursive_factorial(nb - 1) * nb);

}

int main(void)
{
    printf("-2: %d\n",ft_recursive_factorial(-2));
    printf("0: %d\n",ft_recursive_factorial(0));
    printf("3: %d\n",ft_recursive_factorial(3));
    printf("5: %d\n",ft_recursive_factorial(5));
    printf("12: %d\n",ft_recursive_factorial(12));
    
}