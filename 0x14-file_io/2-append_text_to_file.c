#include "holberton.h"

/**
 * append_text_to_file - Appends text to file with NULL terminated string in 2nd arg
 * @filename: Char pointer to the files name.
 * @text_content: NULL terminated string.
 * Return: 1 (Success), -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text;
	ssize_t bytes;

	bytes = sizeof(text_content);

	if (filename != NULL)
	{

		if (text_content == NULL)
			text_content = "";

		fd = open(filename, O_WRONLY);

		text = write(fd, text_content, bytes);

		if (text < 0)
			return (-1);

		close(fd);
		return (1);
	}

	return (-1);


}
