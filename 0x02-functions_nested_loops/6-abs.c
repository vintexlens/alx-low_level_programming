#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @x: the integer to check
 * Return: 0
 */

int _abs(int x)
{
	int result;

	if (x < 0)
		result = x * (-1);
	else
		result = x;
	return (result);
}
