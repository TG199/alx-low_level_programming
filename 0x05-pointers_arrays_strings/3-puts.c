#include "main.h"

/**
 * _puts - print string
 * @str: string to print
 *
 * Description: This function prints the sring to
 * stdout.
 * Return: 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	} _putchar('\n');
}
