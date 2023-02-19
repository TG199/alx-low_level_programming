#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of program.
 *
 * Description: This function prints the last digit of the number stored
 * in the variable n.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	if (n > 5)
		printf("is %d and is greater than 5\n", n % 10);
	if (n == 0)
		printf("is %d and is 0\n", n % 10);
	if (n != 0 && n < 6)
		printf("is %d and is less than 6 and not 0", n % 10);
	return (0);
}
