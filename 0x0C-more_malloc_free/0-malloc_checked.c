#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: varriable to allocate for memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);

	if (!i)
	{
		exit(98);
	}
	return (i);
}
