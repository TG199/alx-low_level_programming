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
	string = str[0];

	while (str[string] != '\0')
	{
		_putchar(string);
		string++;
	} _putchar('\n');
}
