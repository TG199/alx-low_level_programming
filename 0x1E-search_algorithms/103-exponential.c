#include "search_algos.h"

/**
 * print_array - print array
 * @array: array to print
 * @low: start point
 * @high: start point
 *
 * Return: Nothing
 */
void print_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	i = low;

	while (i <= high)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * binary_search - binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: idx of the array matching the value
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}


/**
 * exponential_search -  exponential search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx, next;
	int result;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);
	idx = 1;

	while (array[idx] < value && idx < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		idx *= 2;
	}
	next = (idx >= size) ? (size - 1) : idx;

	idx /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)idx, (int)next);

	result = binary_search(array + idx, (next + 1) - idx, value);

	if (result >= 0)
		result += idx;
	return (result);
}
