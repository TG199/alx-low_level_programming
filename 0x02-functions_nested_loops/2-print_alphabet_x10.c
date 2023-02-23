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
	char ch;
	int a;

	for (ch = 'a';ch <= 'z';ch++)
	{
		for (a = 0;a <= 10;a++)
		{
			_putchar(a);
		}_putchar('\n');
	}
}

