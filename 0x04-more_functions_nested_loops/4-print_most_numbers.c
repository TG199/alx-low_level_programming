#include "main.h"

/**
 * print_most_numbers - print some numbers
 *
 * Description: This function prints 0 - 9 except 2 and 4
 * Return: 0.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		} 
		i++;
		_putchar('\n');
	}
}
