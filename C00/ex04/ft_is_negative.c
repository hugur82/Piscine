#include <unistd.h>
void ft_is_negative(int n){
    if (n < 0)
        write (1 , "N", 1);
    else
        write (1 , "P", 1);
}


int main(void)
{

    ft_is_negative(-152);
    ft_is_negative(-2);
    ft_is_negative(0);
    ft_is_negative(152);
    ft_is_negative(98152);
    return (0);
}