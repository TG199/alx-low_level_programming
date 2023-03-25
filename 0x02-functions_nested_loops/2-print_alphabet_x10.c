#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabets.
 *
 * Description: This program prints out
 * lowercase alphabet 10x.
 * Return: 0;
 */
void print_alphabet_x10(void)
{
	int count;
	char a;

	for (count = 0; count < 10; count++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		} _putchar('\n');
	}
}

