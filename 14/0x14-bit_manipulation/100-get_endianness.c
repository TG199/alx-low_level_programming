#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big, 1 if small
 */

int get_endianness(void)
{
	int num = 1;
	char *p = (char *)&num;

	if (*p == 1)
		return (1);
	else
		return (0);
}
