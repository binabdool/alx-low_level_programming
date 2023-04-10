#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t r;

	for (r = 0; str[r]; r++)
		;
	return (r);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int d;
	ssize_t tet = 0;

	if (filename == NULL)
		return (-1);
	d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (d == -1)
		return (-1);
	if (text_content != NULL)
		tet = write(fd, text_content, _strlen(text_content));
	close(d);
	if (tet == -1)
		return (-1);
	return (1);
}
