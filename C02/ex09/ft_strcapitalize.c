#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    
    i=0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (i == 0 )
                str[i] -= 32;
            else if  (str[i - 1] == ' ' || str[i - 1] == '+'|| str[i - 1] == '-')
                str[i] -= 32;
        }
        i++;
    }
    return(str);
}

int main(void)
{
    char str[256]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", str);
    printf("%s\n", ft_strcapitalize(str));
}