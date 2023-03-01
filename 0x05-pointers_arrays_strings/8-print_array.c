#include "main.h"
#include <stdio.h>


/**
 * print_array - print array element
 * @a: array to print
 * @n: number of array elements to print
 *
 * Description: This function prints a number of elements in an array.
 * Return: 0;
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	} printf("\n");
}
