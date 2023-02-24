#include "main.h"

/**
 * _isupper - Print letters
 *
 * Description: This function checks for upper
 * case letters and prints them.
 * Return: 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
