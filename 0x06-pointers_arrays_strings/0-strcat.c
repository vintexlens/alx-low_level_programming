#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
