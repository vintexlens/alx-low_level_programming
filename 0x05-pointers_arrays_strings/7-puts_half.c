#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, half;

	i = 0;
	j = 0;
	half = 0;

	while (str[i] != '\0')
	{
		j++;
	}


	if ((half % 2) == 0)
	{
		half = (i / 2);

	}
	else
	{
		half = ((i + 1) / 2);
	}
	for (i = half; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
