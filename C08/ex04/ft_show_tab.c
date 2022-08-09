#include "ft_strs_to_tab.c"
#include <unistd.h>

void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while(0 != par[i].str)
    {
        write ( 1, par[i].str, par[i].size);
        i++;
    }
}

int main(int argc, char **argv)
{
    
    ft_show_tab(ft_strs_to_tab(argc,argv));
}