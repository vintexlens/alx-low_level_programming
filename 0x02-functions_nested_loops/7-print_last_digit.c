#include "main.h"

/**
 * print_last_digit - Printing the last digit in a number
 * @x: integer value
 * Return: value of the last digit
 */

int print_last_digit(int x)
{
	int last_digit;

	last_digit = (x % 10);

	return (last_digit);
}
