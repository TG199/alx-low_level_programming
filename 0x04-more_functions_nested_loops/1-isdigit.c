#include "main.h"

/**
 * _isdigit - Print digit.
 * @c: Variable to print
 *
 * Description: This functions checks if a variable is
 * a digit and prints it.
 * Return: 0.
 */
int _isdigit(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
