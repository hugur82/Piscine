#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int nbr;
    int i;
    int *tab;

    nbr = max - min;
    if (min >= max)
    {
        *range = NULL;
        return (0);   
    }
    tab = malloc(sizeof(int) * nbr);
    if (*range == NULL)
        return (-1);
    i = 0;
    while(i < nbr)
    {

        tab[i] = min + i; 
        i++;
    }
    *range = tab;
    return (i);
}

int main(void)
{
    int min;
    int max;
    int *tab;
    int size;
    int i;

    min = -10;
    max = 15;
    
    size = ft_ultimate_range(&tab,  min,  max);
    if (size != 0)
    {
        printf(" il y a %d elements\n", size);
        while ( i < max - min )
        {
            printf("%d \n", tab[i]);
            i++;
        }
    }
    return (0);
}