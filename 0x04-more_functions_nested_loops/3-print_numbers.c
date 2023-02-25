#include "main.h"

/**
 * print_numbers - print 0 -9.
 *
 * Description: This function prints out 0 - 9.
 * Return: 0.
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	} _putchar('\n');
}
