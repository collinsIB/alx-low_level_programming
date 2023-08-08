#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - functions that reads a text file and
 * prints it to the POSIX standard ouput
 * @filename: the textfile to read
 * @letters: the character description
 *
 * Return: if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int  fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr != rd)
		return (0);

	free(buffer);
	close(fd);

	return (wr);
}
