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
	int fd, fd2, get_read, get_write;
	char *buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	get_read = 1024;
	while (get_read == 1024)
	{
		get_read = read(fd, buffer, 1024);
		if (get_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		get_write = write(fd2, buffer, get_read);
		if (get_write == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
