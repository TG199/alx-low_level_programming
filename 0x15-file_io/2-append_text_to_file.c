#include "main.h"

/**
 * _strlen - get length of string
 * @s: string to grt length
 *
 * Description: This function gets the number of chars in a
 * string
 * Return: length
 */
char _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}

/**
 * append_text_to_file -appends text to a file
 * @filename: file to append text
 * @text_content: text to append to file
 *
 * Description: This function appends a text to an
 * existing file
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;
	char *text = text_content;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text == NULL)
	{
		close(fd);
		return (1);
	}

	wr = write(fd, text, _strlen(text));

	if (wr == -1)
	{
		return (-1);
	}
	close(fd);


	return (1);
}

