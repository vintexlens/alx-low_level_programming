#include "main.h"

/**
 * print_last_digit - Printing the last digit in a number
 * @x: integer value
 * Return: value of the last digit
 */

int print_last_digit(int x)
{
	int rsult;

	if (x > 0)
		rsult = (x % 10);
	else

		rsult = -(x % 10);
	_putchar(rsult + '0');
	return (rsult);
}
