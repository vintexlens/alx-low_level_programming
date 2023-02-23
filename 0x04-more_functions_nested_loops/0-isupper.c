#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: our varriable
 *
 * Return: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	while (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
