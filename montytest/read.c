#include "monty.h"

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
			return (EXIT_SUCCESS);

		bytes = read(fd, content, letters);
		text = write(STDOUT_FILENO, content, bytes);

		close(fd);
		free(content);
		return (text);
	}

	return (EXIT_SUCCESS);
}
