#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i, len, write_bytes;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(i);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	write_bytes = write(i, text_content, len);
	if (write_bytes == -1)
	{
		close(i);
		return (-1);
	}

	close(i);
	return (1);
}
