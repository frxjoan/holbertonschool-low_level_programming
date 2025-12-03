#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * _strlen - Short description, single line
 * @s: Description of parameter x
 * Return: Description of the returned value
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * create_file - Short description, single line
 * @filename: Description of parameter x
 * @text_content: Description of parameter x
 * Return: Description of the returned value
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwritten;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		nwritten = (write(fd, text_content, _strlen(text_content)));
		if (nwritten == -1)
		{
			close(fd);
			return (-1);
		}
		return (1);
	}
	close(fd);
	return (1);
}
