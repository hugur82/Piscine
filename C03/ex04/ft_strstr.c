#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int flag;

    j = 0;
    while(str[j])
    {
        i = 0;
        flag = 1;
        while(to_find[i] && flag == 1)
        {
            if (to_find[i] != str[j+i])
                flag = 0;
            i++;
        }
        if (flag == 1)
        {
            while (str[j+i])
            {
                to_find[i]= str[j+i];
                i++;
            }
            return (to_find);
        }
        j++;
    }
    return (NULL);
}

int main(void)
{
    char mot1[125] = "salut";

    printf("%s\n",strstr(" bonjour ssalutt toi",mot1));
    printf("%s\n",ft_strstr("salut bonjour ssalutt toi",mot1));
    printf("%s\n",ft_strstr(" bonjour ssaluutt toi",mot1));
    
}