#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: value.
 * @m: value.
 * Return: 0 (Success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int j;

	j = n ^ m;
	while (j)
	{
		i += j & 1;
		j = j >> 1;
	}
	return (i);
}
