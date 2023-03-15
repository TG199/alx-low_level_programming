#include "main.h"

/**
 * _strdup - returns pointer to newly allocated space
 * in memory
 * @str:string
 *
 * Description: This function returns a
 * pointer to newly allocated string
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		;
		i++;
	}
	ptr =(char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (j <= i)
	{
		ptr[j] = str[j];
		j++;
	} return (ptr);
}
