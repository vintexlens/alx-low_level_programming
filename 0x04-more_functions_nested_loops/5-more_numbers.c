#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 63; j++)
		{
			_putchar (j);
		}
		_putchar (10);
	}
}
