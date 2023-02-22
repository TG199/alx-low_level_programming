#include "main.h"

/**
 * print_alphabet - Entry point.
 *
 * Description: This program prints lowercase letters
 * using _putchar.
 * Return: 0.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	} _putchar('\n');
	return (0);
}
