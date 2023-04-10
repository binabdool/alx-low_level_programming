#include "main.h"

/**
 * append_text_to_file - apends text to file
 * @filename: path to file
 * @text_content: content
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int u, v, tet = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tet = 0; text_content[tet];)
			tet++;
	}

	u = open(filename, O_WRONLY | O_APPEND);
	v = write(u, text_content, tet);

	if (u == -1 || v == -1)
		return (-1);

	close(u);

	return (1);
}
