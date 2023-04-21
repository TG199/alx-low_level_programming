#include "main.h"

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
		if ((fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600)) == -1)
		{
			return (-1);
		}
	}
	else
	{
	
		if ((fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600)) == -1)
		{
			return (-1);
		}

		if ((write_file = write(fd, text_content, _strlen(text_content))) == -1)
		{
			return (-1);
		}
	}
	
	close(fd);
	return (1);
}
