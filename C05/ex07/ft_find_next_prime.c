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

int ft_find_next_prime(int nb)
{
    int i;

    i = nb;
    while (ft_is_prime(i) != 1)
    {
        i++;
        ft_is_prime(i);
    }

    return (i);
}

int main(void)
{
    int rep;
    
    for (int i = 0; i < 20; i++)
    {
        rep = ft_find_next_prime(i);
        printf("le prochain premier de %d est: %d\n",i ,rep );
    }
}