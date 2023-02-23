#include "main.h"

/**
 * print_alphabet_x10 - Entry point.
 *
 * Description: This program prints out
 * lowercase alphabet 10x.
 * Return: 0;
 */
void print_alphabet(void)
{
	char ch = 'a',

	while (ch <= 'z')
	{
		for (int i = 0; i <= 10; i++)
		{
			_putchar(ch);
			ch++;
		} _putchar('\n');
	}
}

