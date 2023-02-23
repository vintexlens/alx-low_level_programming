#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: varriable to be passed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i; space++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar (10);
		}
	}
	_putchar (10);
}
