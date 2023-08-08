#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - functions that appends text to the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int tc;
	ssize_t n_wr;

	if (filename == NULL)
		return (-1);

	tc = open(filename, O_WRONLY | O_APPEND);
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
