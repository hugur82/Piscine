#include <stdio.h>

int ft_recurs(int nb ,int tmp)
{
    if (tmp == 0)
        return (0);
    if (nb == tmp * tmp)
        return (tmp);
    return (ft_recurs(nb, tmp - 1));
}

int ft_sqrt(int nb)
{
    return (ft_recurs(nb ,nb));
}

int main(void)
{
    int res;

    res= 0;
    for(int i = 0; i < 2566; i++)
    {
     res= ft_sqrt(i);
     if (res != 0)
      printf("racine de %2d = %2d\n", i,res);
    }
    return (0);
}