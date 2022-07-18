#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}
int main(void)
{
    printf("%d\n",ft_strlen("123456"));
    printf("%d\n",ft_strlen("Salut ca va 123456"));
    printf("%d\n",ft_strlen("1234jgjgjg56"));
}