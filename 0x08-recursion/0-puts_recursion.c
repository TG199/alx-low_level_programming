#include "main.h"

/**
 * _puts_recursion - print string recursively
 * @s: string to print
 *
 * Description: This function prints characters in a
 * string using recursion
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
