#include "main.h"
#include <string.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
