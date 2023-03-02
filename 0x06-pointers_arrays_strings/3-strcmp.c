#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares two strings.
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int c = 0;

	if (strlen(s1) == strlen(s2))
	{
		for (i = 0 ; s1 != s2; i++)
		{
			if (s1[i] == s2[i])
		}
		if (c == i)
			return (1);
	}
	return (0);
}
