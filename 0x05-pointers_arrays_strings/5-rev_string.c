#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
