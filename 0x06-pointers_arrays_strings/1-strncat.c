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
	int len;

	for (len = 0; dest[len] != '\0'; len++)

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
