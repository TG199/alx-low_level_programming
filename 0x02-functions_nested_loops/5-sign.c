#include "main.h"

/**
 * print_sign - print sign of number
 * @n: number to check
 *
 * Description: This function checks if a number is positive, negative
 * or 0 and prints the sign
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
