#include "main.h"

/**
 * _strncat - concatenate  number of string 
 * @dest: string to append to
 * @src: string to append
 * 
 * Description: This function appends a number of specified number of string
 * from the source string to the destination string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    return (dest);
}