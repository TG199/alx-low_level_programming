#include "main.h"

/**
 * print_rev - print in reverse
 * @s: String to print
 *
 * Description: This function prints strings in
 * reverse.
 * Return: 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	} _putchar('\n');
}

