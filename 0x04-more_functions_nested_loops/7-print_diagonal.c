#include "main.h"





void print_diagonal(int n)
{
	int i = 1;
	int j = 1;

	while (i <= n)
	{
		_putchar('\n');
		while (j <= n)
		{
			_putchar('\\');
			j++;
		}
		i++;
		
	}
}
