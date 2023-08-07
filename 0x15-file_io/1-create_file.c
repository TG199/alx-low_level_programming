#include "main.h"
#include <string.h>
/**
 * create_file - Create a file
 * @filename: Name of file to create
 * @text_content: Content to write to file
 *
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written_bytes;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
