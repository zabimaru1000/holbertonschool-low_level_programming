#include "holberton.h"

int _strlen(char *s);

/**
 * create_file - Creates file with NULL terminated string in 2nd arg
 * @filename: Char pointer to the files name.
 * @text_content: NULL terminated string.
 * Return: 1 (Success), -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text, bytes;

	if (text_content == NULL)
		text_content = "";

	bytes = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	text = write(fd, text_content, bytes);
	if (text == -1)
		return (-1);

	close(fd);
	return (1);
}

/**
 * _strlen - Returns an integer inside an array
 * @s: pointer with address variable from str.
 *
 * Description: Loops an integer inside an array until it reaches NULL.
 * Description (cont): Array contains the string "Holberton!"
 *
 * Return: init (An integer contained in an array)
 */
int _strlen(char *s)
{
	int init;

	for (init = 0; s[init] != '\0'; init++)
	{
	}

	return (init);

}
