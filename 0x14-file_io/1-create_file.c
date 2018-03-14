#include "holberton.h"

/**
 * create_file - Creates file with NULL terminated string in 2nd arg
 * @filename: Char pointer to the files name.
 * @text_content: NULL terminated string.
 * Return: 1 (Success), -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	bytes = sizeof(text_content);

	if (filename == NULL )
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	read(fd, text_content, bytes);
	write(fd, text_content, bytes);

	close(fd);

	return (1);
}
