#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, half, max;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	max = i;

	if (max % 3 == 0)
	{
		half = (max - 1) / 2;

		while (half <= max)
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		half = max / 2;

		while (half <= max)
		{
			_putchar(str[half]);
		}

	_putchar('\n');

	}
}
