#include "main.h"

/**
 * get_bit - return bit at index
 * @n: integer to evaluate
 * @index: bit to return
 *
 * Return: On success return bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
