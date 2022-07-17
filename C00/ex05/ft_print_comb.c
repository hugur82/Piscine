#include <unistd.h>

void ft_print(int i, int j, int k)
{
    char a;
    char b;
    char c;

    a = i + '0';
    b = j + '0';
    c = k + '0';
    
    write (1, &a, 1);
    write (1, &b, 1);
    write (1, &c, 1);
}
void ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = 0;
    while (i <= 7)
    {
        j = i + 1;
        while (j <= 8)
        {
            k = j + 1;
            while (k <= 9)
            {
                ft_print(i,j,k);
                if (!(i == 7 && j == 8 && k == 9))
                    write (1, ", ", 2);
                else
                    write (1, "\n", 1);
                k++;
            }
            j++;
        }
        i++;
    }
}

int main (void)
{
    ft_print_comb();
    return (0);
}