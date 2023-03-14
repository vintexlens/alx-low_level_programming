#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * @size: size of array
 * @c: our varriable
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(sizeof(char));

	if (arr == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
			return (arr);
		}
	}
	else
		return (NULL);
}
