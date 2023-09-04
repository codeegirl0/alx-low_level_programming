#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: for text file to be read
 * @letters: letters to be read
 * Return: bytes numbers to read and printed
 *        0 when function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
	char *buf;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
