#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    
    i=0;
    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n-1)
    {
        i++;
    }
    return(s1[i] - s2[i]);
}

int main(void)
{
    printf("%d\n",ft_strncmp("salut à toi", "salut a toi",2));
    printf("%d\n",ft_strncmp("salut à toi", "salut a toi",7));
    printf("%d\n",ft_strncmp("salut à toi", "salut a toi",6));
    
}