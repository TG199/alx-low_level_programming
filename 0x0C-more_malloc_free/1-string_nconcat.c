#include "main.h"

/**
 * string_nconcat - concatenate string
 * @s1: string
 * @s2: string
 * @n: number
 *
 * Description: This function concatenates 2 strings
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len;
	unsigned int s2_len;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if ( n > s2_len)
		n = s2_len;
	ptr = (char*) malloc(sizeof(char) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);

	memcpy(ptr, s1, s1_len);
	memcpy(ptr + s1_len, s2, n);

	ptr[s1_len + n] = '\0';

	return (ptr);

	
}
