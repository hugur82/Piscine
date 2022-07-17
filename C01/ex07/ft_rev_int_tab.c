#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int tmp[size];
    int i;
    int j;


    i = 0;
    while(i != size)
        {
            i++;
        }
    j = 0;
    while(--i >= 0)
    {
        tmp[j]=tab[i];
        j++;
    }
    i = 0;
    while(i != size)
    {
        tab[i] = tmp[i];
        i++;
    }
}

int main(void)
{
    int tab[10]={1,2,3,4,5,6,7,8,9,10};
    int i;

    i=0;
    while(i != 10)
    {
        printf(" %d | ", tab[i]);
        i++;
    }
    printf("\n");
    ft_rev_int_tab(tab, 10);
    i = 0;
    while(i != 10)
    {
        printf(" %d | ", tab[i]);
        i++;
    }
}