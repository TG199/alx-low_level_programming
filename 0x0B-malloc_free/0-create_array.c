#include "main.h"

/**
 * create_array - create array
 * @size: size of array
 * @c: character to print
 *
 * Description: This function creates an array of size
 * Return:size
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(c));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{	ptr[i] = c;
		i++;
	} return (ptr);


}
