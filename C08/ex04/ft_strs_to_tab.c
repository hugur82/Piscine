#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    int j;
    int size;
    t_stock_str *tab;

    tab = malloc(sizeof(tab) * (ac));
    if (tab == NULL)
        return (NULL);
    i = 0;
    while (++i < ac)
    {
        j = 0;
        size = 0;
        while(av[i][j] != 0)
            j++;
        tab[i].size = j+1;
        tab[i].str = av[i];
        tab[i].copy = tab->str;
    }
    tab[i].str = 0;
    tab[i].size = 0;
    tab[i].copy = 0;
    return (tab);
}