#include "holberton.h"

/**
 * read_textfile - Reads file and prints to std output
 * @filename: Char pointer to the files name.
 * @letters: The amount of letters in file.
 * Return: text (The amount of numbers written) or 0 (failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, text;
	ssize_t bytes;
	char *content;

	content = malloc(sizeof(char) * letters);

	if (filename != NULL)
	{

		fd = open(filename, O_RDONLY);

		if (fd < 0)
			return (0);

		bytes = read(fd, content, letters);
		text = write(STDOUT_FILENO, content, bytes);

		close(fd);
		free(content);
		return (text);
	}

	return (0);
}
