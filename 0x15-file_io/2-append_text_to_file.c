#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file pointer value
 * @text_content: size value
 * Return: 0 (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	i = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (i < 0)
	{
		return (-1);
	}
	while (text_content[k])
	{
		k++;
	}
	j = write(i, text_content, k);
	if (j < 0)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
