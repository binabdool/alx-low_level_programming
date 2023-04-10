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
		int d;
		ssize_t fr, fw;
		char *buf;

		if (filename == NULL)
			return (0);
		d = open(filename, O_RDONLY);
		if (d == -1)
			return (0);
		buf = malloc(sizeof(char) * letters);
		if (buf == NULL)
		{
			close(d);
			return (0);
		}
		fr = read(d, buf, letters);
		close(d);
		if (fr == -1)
		{
			free(buf);
			return (0);
		}
		fw = write(STDOUT_FILENO, buffer, fr);
		free(buf);
		if (fr != fw)
			return (0);

		return (fw);
}
