#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return(str);
}

int main(void)
{
    char str[128]="123 azeze AZERTYdfsqhlj azerazr =)àé&";
    printf("%s\n", str);
    printf("%s\n",  ft_strlowcase(str));
}