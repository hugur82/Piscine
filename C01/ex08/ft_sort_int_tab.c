#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i, j, tmp;
 
  for (i=0 ; i < size-1; i++)
  {
    for (j=0 ; j < size-i-1; j++)
    {
      if (tab[j] > tab[j+1]) 
      {
        tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
      }
    }
  }
}

int main(void)
{
    int tab[10]={10,9,8,7,6,5,4,3,2,1};
    int i;

    
    ft_sort_int_tab(tab,10);
    i = -1;
    while(++i < 10)
        printf("%4d",tab[i]);
}