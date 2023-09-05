#include "main.h"

/**
 * append_text_to_file - function that appends text to the end of a file
 * @filename: name of the file to be created
 * @text_content: file content
 *
 * Return: Return 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w;

	ssize_t len = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(f, text_content, len);
		if (w == -1)
			return (-1);
	}

	close(f);
	return (1);
}
