#include "main.h"

/**
 * more_numbers - print more numbers.
 *
 * Description: This function prints 0 - 14 10 times.
 * Return: 0.
 */
void more_numbers(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			_putchar(j);

		}
		_putchar('\n');
	}
}
