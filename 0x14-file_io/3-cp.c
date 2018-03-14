#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @ac: Number of arguments
 * @av: Argument vector.
 * Return: 0 (Success)
 */
int main(int ac, char **av)
{
	int fd;
	ssize_t bytes;

	bytes = sizeof(av[1]);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd = open(av[1], O_CREAT | O_RDWR | O_TRUNC, 0664);
	write(fd, av[2], bytes);


	close(fd);

	return (0);
}
