#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: varriable that is passed
 *
 * Return: 1 if c is lowercase. Else 0
 */

int _islower(int c)
{
	c = 97;

	while (c <= 123 && c > 96)
	{
		return (1);
	}
	return (0);
}
