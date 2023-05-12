#include "main.h"

/**
 * print_line - print _ number of n times
 * @n: number of times to print _
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
