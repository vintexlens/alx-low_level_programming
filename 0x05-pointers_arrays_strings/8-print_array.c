#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer
 * @n: number of elements of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i == (n-1); i++)
	{
		printf("%d, ", a[i]);
	}

	printf("%d\n", a[i]);

}
