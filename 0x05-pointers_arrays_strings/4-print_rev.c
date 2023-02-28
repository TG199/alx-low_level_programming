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
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
