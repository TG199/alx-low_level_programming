#include "main.h"

/**
 * factorial - find factorial of number
 * @n: number to find
 *
 * Description: This function finds the factorial
 * of a given number
 * Return: -1 (error)
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n  = n * factorial(n - 1));
	} else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
