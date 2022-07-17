#include <unistd.h>


void ft_print(int n)
{
    char str[2];

    if (n < 10)
    {
        str[0] = '0';
        str[1] = n + '0';
    }
    else
    {
        str[0] = (n / 10) + '0';
        str[1] = (n % 10) + '0';
    }
    
    write (1 , str, 2);
}

void ft_print_comb2(void)
{
    int i;
    int j;

    i = 0;
    while(i <= 98)
        {
            j = i + 1;
            while (j <= 99)
            {   
                ft_print(i);
                write (1, " ", 1);
                ft_print(j);
                if (!(i == 98 && j == 99))
                    write (1, ", ", 2);
                else
                    write (1, "\n", 1);
                j++;
            }
            i++;
        }
}

int main(void)
{
    ft_print_comb2();
    return (0);
}