#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, length, num = 0;

	if (b == 0)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}
	for (i = 0; i < length; i++)
	{
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
