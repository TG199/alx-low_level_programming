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

/**
 * print_last_digit - Print last digit
 * @digit:Number to print last digit
 *
 * Description: This function prints the last
 * digit of any number
 * Return: last digit
 */
int print_last_digit(int digit)
{
	int num;
	char c;

	if (digit > 0)
	{
		num = digit % 10;
		c = num + '0';
		_putchar(c);
		return (num);
	}
	else
	{
		num = _abs(digit) % 10;
		c = num + '0';
		_putchar(c);
		return (num);
	}
}
