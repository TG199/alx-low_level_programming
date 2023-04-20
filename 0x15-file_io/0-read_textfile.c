#include "main.h"


/**
 * read_textfile - reads text file and print
 * @filename: file to read from
 * @letters: Number of letters to read and print
 *
 * Return: Number of read letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd;
	ssize_t wr;
	char *buf = (char *) malloc(letters * sizeof(char));

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	rd = read(fd, buf, letters);
	buf[rd] = '\0';

	if (rd == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, letters);
	if (wr == -1)
	{
		return (0);
	}
	free(buf);
	close(fd);
	return (letters);
}
