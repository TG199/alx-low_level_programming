#include "main.h"


/**
 * _abs - print absolute number
 *
 * Description: This funcion prints the absolute number
 * of a value
 * Return: absolute number
 */

int _abs(int input)
{

	if (input > 0)
	{
		return (input);
	}
	else {
		return (input * -1);
	}
}
