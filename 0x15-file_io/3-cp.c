#include "main.h"

/**
 * check_args - check command line arguments
 * @argc: Number of argument
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_files - open files
 * @file_from: file to copy from
 * @file_to: file to copy to
 * @fd_from: file descriptor of file_from
 * @fd_to: file descriptor of file_to
 */
void open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
	*fd_from = open(file_from, O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	*fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(*fd_from);
		exit(99);
	}
}
/**
 * copy_file -copy file
 * @fd_from: file decriptor of file_from
 * @fd_to: file descriptor of file_to
 * @file_to: file to copy to
 */
void copy_file(int fd_from, int fd_to, char *file_to)
{
	int r, w;
	char buffer[BUFSIZE];

	while ((r = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}
/**
 * close_files - close files
 * @fd_from: file descriptor of all file_from
 * @fd_to: file descriptor of files to
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char *file_from, *file_to;

	check_args(argc);

	file_from = argv[1];
	file_to = argv[2];

	open_files(file_from, file_to, &fd_from, &fd_to);

	copy_file(fd_from, fd_to, file_to);

	close_files(fd_from, fd_to);

	return (0);
}
