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
	half = max / 2;

	while (half <= max)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
