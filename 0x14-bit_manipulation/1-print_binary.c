#include "main.h"

/**
 * print_binary - print binary rep
 * @n: binary to print
 *
 * Description:This function prints the binary rep of an
 * unsigned integer
 * Return: 0;
 */
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (num_bits - 1);
	int first_one = 0;
	int i;

	for (i = 0; i < num_bits; i++)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			first_one = 1;
		}
		else if (first_one)
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
	if (!first_one)
	{
		_putchar('0');
	}
	_putchar('\n');
}
