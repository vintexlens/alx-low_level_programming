#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;

	*b = i;
}
