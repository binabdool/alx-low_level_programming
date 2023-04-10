#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, buf, letters);
	write = write(STDOUT_FILENO, buf, read);

	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(open);

	return (write);
}
