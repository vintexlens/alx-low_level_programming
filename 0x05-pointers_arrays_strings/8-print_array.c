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
	int i, count;
	i = 0;
	count = 1;

	if (n < 0)
		n = 0;

	if (n > 0)
	{
		while (a[i] != '\0' && count < n)
		{
			printf("%d, ", a[i]);
			n++;
			count++;
		}
	}
	printf("%d\n", a[i]);

}
