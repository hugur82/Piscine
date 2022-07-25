#include <stdio.h>

int ft_recurse(int mem, int nb,int flag)
{
    if (nb >= 2)
    {
        if ( mem % nb == 0)
        {
            flag = 0;
            return (flag);
        }
        flag = ft_recurse(mem , nb -1, flag );
    }
    return (flag);
}

int ft_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    if (nb == 2)
        return (1);
    return(ft_recurse(nb , nb - 1, 1));
}

int main(void)
{
    int rep;

    for (int i = 0 ; i < 2000; i++)
    {
        rep = ft_is_prime(i);
        if (rep == 1)
        printf("%3d est premier: %d\n",i,rep );
    }
}