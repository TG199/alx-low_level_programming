#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary to convert
 *
 * Return: result of converted binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = (result << 1) | 0;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}


