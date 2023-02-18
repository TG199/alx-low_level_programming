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
	printf("Size of char: %c byte(s)", sizeof(char));
	printf("Size of int: %d byte(s)", sizeof(int));
	printf("Size of long int: %2d byte(s)", sizeof(long int));
	printf("Size of long long int: %4d byte(s)", sizeof(long long int));
	printf("Size of a float: %2d byte(s)", sizeof(float));
	return (0);
}
