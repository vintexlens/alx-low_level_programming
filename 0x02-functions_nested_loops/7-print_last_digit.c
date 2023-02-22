#include "main.h"

/**
 * print_last_digit - Printing the last digit in a number
 * @x: integer value
 * Return: print_last_digit
 */
int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;
	_putchar(last_digit);

	return (last_digit);
}
