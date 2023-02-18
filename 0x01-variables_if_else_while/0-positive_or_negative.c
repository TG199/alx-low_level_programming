#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */


/**
 * Print random number
 *
 * Description: This function assigns a random number to variable n.
 * It also checks if the assigned number is,
 * positive or negative.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

