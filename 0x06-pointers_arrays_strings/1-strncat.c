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
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	return (dest);
}
