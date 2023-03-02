#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: first pointer
 * @src: second pointer
 * @n: variable
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
