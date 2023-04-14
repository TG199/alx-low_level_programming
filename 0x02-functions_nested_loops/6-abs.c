#include "main.h"


/**
 * _abs - print absolute number
 * @input: number to find absolute value
 * Description: This funcion prints the absolute value
 * of a number
 * Return: absolute value
 */

int _abs(int input)
{

	if (input > 0)
	{
		return (input);
	}
	else
	{
		return (input * -1);
	}
}
