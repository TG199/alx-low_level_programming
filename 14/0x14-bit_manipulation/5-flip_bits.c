#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: integer to operate
 * @m: integer to obtain
 *
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int i = 0;

	while (x != 0)
	{
		i += x & 1;
		x >>= 1;
	}
	return (i);
}
