#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
     int *tab;
     int nbtableau;
    int i;

    if (min >= max)
        return (NULL);
    nbtableau = max - min;
    tab = malloc(sizeof(int) * nbtableau);
    if (tab == NULL)
        return (NULL);
    i = 0;
    while (i != nbtableau)
    {
        tab[i] = min + i;
        i++;
    }
    return (tab);
}

int main(void)
{
    int min;
    int max;
    int i;
    int *tab;

    min = -23;
    max = 25;
    tab = ft_range(min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%d\n", tab[i]);
		}
	}
	else
		printf("NULL");

    free(tab);
    return 0;
}