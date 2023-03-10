#include "main.h"

/**
 * _pow_recursion - return the power of a number
 * @x: value
 * @y: power 
 *
 * Description: Return the power of a value
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
