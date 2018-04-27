#include "monty.h"

int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);

	return (EXIT_SUCCESS);
}
