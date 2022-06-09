#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void)
{
	char c=97;
	while(c<123)
	{
		write(1, &c, 1);
		c++;
	}
	printf("\n");
}

int main (void)
{
	ft_print_alphabet();
	return 0;
}

