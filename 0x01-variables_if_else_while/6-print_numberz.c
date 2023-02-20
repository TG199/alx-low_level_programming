#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: This program prints all base 10 numbers using
 * the putchar function.
 * Return: 0 (Success).
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i);
		i++;
	} putchar('\n');
	return (0);
}

