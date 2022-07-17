#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    while(*str)
    {
        if (*str < 'A' || *str > 'Z' )
            return(0);
        str++;

    }
    return(1);
}

int main(void)
{
    printf("1 : %d\n", ft_str_is_uppercase("AZERTYUSFBSDVOJBDF"));
     printf("1 : %d\n", ft_str_is_uppercase("AZERTYUSFBSDVOJBDF"));
     printf("0 : %d\n", ft_str_is_uppercase("AZERTYUSFBSDVOaJBDF"));
     printf("0 : %d\n", ft_str_is_uppercase("123456"));
    
}