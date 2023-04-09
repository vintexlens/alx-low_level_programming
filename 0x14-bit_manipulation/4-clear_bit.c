#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: pointer value
 * @n: int value.
 * Return: 0 (Success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
