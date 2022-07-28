#include <unistd.h>

int ft_strcmp(char *str1, char *str2)
{
    while(*str1 == *str2 && *str1 && *str2)
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    char *tmp;

    i = 1;
    while (i < argc -1)
    {
        j = 0;
        while (j < argc - 1)
        {
            if (ft_strcmp(argv[j], argv[j+1]) > 0)
            {
                tmp = argv[j];
                argv[j] = argv [j + 1];
                argv[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
    i = 1;
    while(i < argc)
    {
        j = 0;
        while (argv[i][j])
            j++;
        write (1, argv[i], j);
        write (1, "\n", 1);
        i++;
    }
    return (0);
}