#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (++i);
}

char *ft_strcat(char *str1, char *str2)
{
    int i;
    
    i = 0;
    while (str1[i])
        i++;
    while (*str2)
    {
        str1[i] = *str2;
        i++;
        str2++;
    }
    str1[i] = '\0';
    return (str1);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *str;
    int i;
    int count;

    if (size == 0)
    {
        str = malloc(sizeof(char) * 2);
        str[0] = ' ';
        str[1] = '\0';
    }
    else
    {
        count = ft_strlen(sep) * (size - 1);
        i = -1;
        while (++i < size)
        {
            count += ft_strlen(strs[i]);
        }
        count++;
        str = malloc(sizeof(char) * count);
        i = -1;
        while (++i < size)
        {
            str = ft_strcat(str, strs[i]);
            if (i != size - 1)
                str = ft_strcat(str, sep);
        }
    }
    return (str);
}
int main(void)
{
    char *str;
    int size;
    char *strs[5];
    char *sep;

    strs[0] = "Salut";
    strs[1] = "comment va tu?";
    strs[2] = "je vais bien merci";
    strs[3] = "d'accord";
    strs[4] = "42";
    size = 5;
    sep = " => ";

    str = ft_strjoin(size, strs, sep);
    printf("%s", str);
    free(str);
    return (0);
}