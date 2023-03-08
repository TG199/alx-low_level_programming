#include "main.h"

/**
 * _print_rev_recursion - Print string in reverse
 * @s: string to print
 *
 * Description: This function prints string in reverse
 * using recursion
 * Return: no return
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
