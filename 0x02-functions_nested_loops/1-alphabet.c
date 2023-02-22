#include "main.h"

/**
 * main - Entry point.
 *
 * Description: This program prints lowercase letters
 * using _putchar.
 * Return: 0.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	} _putchar('\n');
	return (0);
}
