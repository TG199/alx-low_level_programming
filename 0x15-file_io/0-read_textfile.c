#include "main.h"

/**
 * read_textfile - reads and prints
 * @filename: file to read
 * @letters: number of char to print
 *
 * Return: no of chars read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = (char *) malloc(sizeof(char) * letters);
	ssize_t rd, wr;

	if (filename == NULL)
	{
		return (0);
	}
	else
	{

		fd = open(filename, O_RDONLY);

		if (fd == -1)
		{
			return (0);
		}
		else
		{
			rd = read(fd, buf, letters);

			if (rd == -1)
			{
				return (0);
			}
			else
			{
				wr = write(STDIN_FILENO, buf, letters);

				if (wr == -1)
				{
					return (0);
				}
			}
		}
	}
	free(buf);
	close(fd);
	return (rd);
}
