#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: pointer value
 * @n: int value.
 * Return: 0 (Success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}
	i = n >> index;
	return (i & 1);
}
