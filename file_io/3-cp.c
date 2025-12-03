#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_error - pocket function for less lines
 * @msg: text to write
 * @arg: arg in dprintf
 * @code: exit code
 */

void print_error(const char *msg, const char *arg, int code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * print_errfd - pocket function for less lines
 * @msg: text to write
 * @arg: arg in dprintf
 * @code: exit code
 */

void print_errfd(const char *msg, int arg, int code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
 * main - doubly linked list
 * @argc: integer
 * @argv: i
 * Return: 0
 */

int main(int argc, char **argv)
{
	char buffer[1024];
	ssize_t nwritten, nread, count;
	int fd_from, fd_to;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		close(fd_from), print_error("Error: Can't write to %s\n", argv[2], 99);

	while ((nread = read(fd_from, buffer, 1024)) > 0)
	{
		count = 0;
		while (count < nread)
		{
			nwritten = write(fd_to, buffer + count, nread - count);
			if (nwritten == -1)
			{
				close(fd_from), close(fd_to);
				print_error("Error: Can't write to %s\n", argv[2], 99);
			}
			count += nwritten;
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from), close(fd_to), exit(98);
	}
	if (close(fd_from) == -1)
		close(fd_to), print_errfd("Error: Can't close fd %d\n", fd_from, 100);

	if (close(fd_to) == -1)
		print_errfd("Error: Can't close fd %d\n", fd_to, 100);
	return (0);
}
