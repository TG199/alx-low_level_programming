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
	printf("Size of char: %2d byte(s)\n", sizeof(char));
	printf("Size of int: %2d byte(s)\n", sizeof(int));
	printf("Size of long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %2d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %2d byte(s)\n", sizeof(float));
	return (0);
}
