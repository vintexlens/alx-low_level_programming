#include "main.h"

/**
 * _isalpha - unction that checks for alphabetic character.
 * @c: varriable to be passed
 *
 *
 * Return: 1 if c is a letter, lowercase or uppercase else 0.
 */

int _isalpha(int c)
{
	while (c > 64 && c < 91)
	{
		return (1);
	}
	while (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
