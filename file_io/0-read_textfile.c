#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - Short description, single line
 * @filename: Description of parameter x
 * @letters: Description of parameter x
 * Return: Description of the returned value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(letters);
	ssize_t nread;
	ssize_t nwritten;

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	nwritten = write(1, buffer, nread);
	if (nwritten == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (nwritten);
}
