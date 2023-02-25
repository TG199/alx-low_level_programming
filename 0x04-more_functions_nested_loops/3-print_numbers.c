#include "main.h"

/**
 * print_numbers - print 0 -9.
 *
 * Description: This function prints out 0 - 9.
 * Return: 0.
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i);
		i = i + 1;
		_putchar('\n');
	}
}
