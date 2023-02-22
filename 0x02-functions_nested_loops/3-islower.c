#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: varriable that is passed
 *
 * Return: 1 if c is lowercase. Else 0
 */

int _islower(int c)
{
	while (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
