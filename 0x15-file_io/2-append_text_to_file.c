#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append at the text
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, i, j = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(f, text_content, j);
		if (i != j)
			return (-1);
	}

	close(f);

	return (1);
}
