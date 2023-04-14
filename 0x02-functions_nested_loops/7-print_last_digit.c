#include "main.h"


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
		return(num);
	}
	else
	{
		num = _abs(digit) % 10;
		c = num + '0';
		_putchar(c);
		return (num);
	}
}

