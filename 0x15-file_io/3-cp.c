#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024

/**
 * check_argc - check number of arguments
 * @argc: Number of arguments
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * open_files - open files
 * @argv: Array of arguments
 * @fd_from: Pointer to file descriptor for file_from
 * @fd_to: pointer to file descriptor for file_to
 */
void open_files(char **argv, int *fd_from, int *fd_to)
{
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	*fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		close(*fd_from);
		exit(99);
	}
}
/**
 * copy_file - copy file
 * @fd_from: File descriptor for file_from
 * @fd_to: file descriptor for file_to
 * @argv: Array of arguments
 */
void copy_file(int fd_from, int fd_to, char **argv)
{
	int rd, wr;
	char buf[BUFSIZE];

	while ((rd = read(fd_from, buf, BUFSIZE)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}
/**
 * close_files - close files
 * @fd_from: file descriptor for file_from
 * @fd_to: file descriptor for file_to
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	check_argc(argc);

	open_files(argv, &fd_from, &fd_to);

	copy_file(fd_from, fd_to, argv);

	close_files(fd_from, fd_to);

	return (0);
}
