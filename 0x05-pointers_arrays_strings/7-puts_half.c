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

	while (str[i] != '\0')
	{
		j++;
	}

	half = (i / 2);

	if ((half % 2) == 1)
	{
		half = (i + 1) / 2;

		while ((i = half) && (str[i] != '\0'))
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		half = (i / 2);

		while (half != '\0')
		{
			_putchar(str[i]);
			half++;
		}

	_putchar('\n');

	}
}
