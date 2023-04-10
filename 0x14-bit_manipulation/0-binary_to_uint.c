#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary to convert
 *
 * Description: This function converts binary number to an
 * unsigned int
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_to_convert = 0;
	unsigned int index = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[index] != '\0')
	{
		if (b[index] == '0' || b[index] == '1')
		{
			bin_to_convert = bin_to_convert * 2 + (b[index] - '0');
		}
		else {
			return (0);
		}
		index++;
	}

	return (bin_to_convert);
}
