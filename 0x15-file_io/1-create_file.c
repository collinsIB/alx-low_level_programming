#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file with the specified name and writes
 * the given content to it
 * @filename: file to be created
 * @text_content: the contentto write
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int tc;
	ssize_t n_wr;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	tc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (tc == -1)
		return (-1);

	if (text_content != NULL)
	{
		n_wr = write(tc, text_content, strlen(text_content));
		if (n_wr == -1)
			return (-1);
	}

	close(tc);

	return (1);
}
