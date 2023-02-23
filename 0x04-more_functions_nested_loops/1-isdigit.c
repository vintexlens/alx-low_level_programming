#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: our varriable to be passed
 *
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	while (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
