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
	char ch = 'a';
	int a = 0;

	while (ch <= 'z')
	{
		while (a <= 10)
		{
			_putchar(ch);
			ch++;
		} ch++;
		_putchar('\n');
	}
}

