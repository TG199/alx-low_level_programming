#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: This program prints lowercase and
 * uppercase letters.
 * Return: 0 (Success).
 */
int main(void)
{
	char ch = 'a';
	char Bch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	} while (Bch <= 'Z')
	{
		putchar(Bch);
		Bch = Bch + 1;
	} putchar('\n');
	return (0);
}
