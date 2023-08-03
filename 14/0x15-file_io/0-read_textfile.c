#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: fd to read from.
 * @letters: number of text to read and print
 *
 * Return: Number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, written_bytes;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buf, letters);
	if (read_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	written_bytes = write(STDOUT_FILENO, buf, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (written_bytes);
}


