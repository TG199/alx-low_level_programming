#include "main.h"
/**
 * _strlen - Return length of string
 * @s: string parameter
 *
 * Description:This function prints the length of string.
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	length++;
	return (length);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: Content of file
 *
 * Description: This function creates a file and writes to it
 * the written content
 * Return: 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_file;


	if (filename == NULL)
	{
		return (1);
	}
	else if (text_content == NULL)
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
		{
			return (-1);
		}
	}
	else
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
		{
			return (-1);
		}

		write_file = write(fd, text_content, _strlen(text_content));
		if (write_file == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}