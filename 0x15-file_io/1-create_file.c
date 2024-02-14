#include "main.h"

/**
 * create_file - function that create a file with the specified name
 * @filename: the name of the file to create
 * @text_content: content of the fie
 *
 * Return: The function returns 1 on success and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int f;

	ssize_t n_written;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		n_written = write(f, text_content, strlen(text_content));
		if (n_written == -1)
			return (-1);
	}

	close(f);

	return (1);
}
