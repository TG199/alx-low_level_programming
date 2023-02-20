#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: This program prints all alphabet
 * except q and e.
 * Return: 0 (Success).
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c = c + 1;
	} putchar('\n');
	return (0);
}
