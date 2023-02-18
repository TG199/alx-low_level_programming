#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: This function prints the size of various
 * data types using the sizeof() function.
 * Return: Always 0 (Success).
 */
int main(void)
{
	fprintf("Size of char: %2d byte(s)\n", sizeof(char));
	fprintf("Size of int: %2d byte(s)\n", sizeof(int));
	fprintf("Size of long int: %2d byte(s)\n", sizeof(long int));
	fprintf("Size of long long int: %2d byte(s)\n", sizeof(long long int));
	fprintf("Size of a float: %2d byte(s)\n", sizeof(float));
	return (0);
}
