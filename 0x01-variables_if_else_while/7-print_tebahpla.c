#include <stdio.h>

/**
 * main - Entry point of program.
 *
 * Description: This program prints lowercase alphabets in
 * a reversed manner.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	} putchar('\n');
	return (0);
}
