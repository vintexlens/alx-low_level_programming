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
	n = 0;

	while (a[n] != '\0')
	{
		printf("%d, ", a[n]);
		n++;
	}
	printf("\n");

}
