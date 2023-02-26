#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: This program prints base 16
 * numbers in lowercase
 * Return: 0.
 */
int main(void)
{
	char i = '0';
	char j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	} putchar('\n');
	return (0);
}
