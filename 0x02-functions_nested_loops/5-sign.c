#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: variable number to be passed
 *
 * Return: 0, 1 or -1 on success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

