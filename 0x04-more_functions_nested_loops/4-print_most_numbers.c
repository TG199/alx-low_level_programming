#include "main.h"
#include "stdio.h"
/**
 * print_most_numbers - print 0 to 9 except 2 and 4.
 *
 * Return: printed numbers.
 */

void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		if (num == '1' || num == '3')
		{
			num++;
		}
		num++;
	}
	_putchar('\n');
}
