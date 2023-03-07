#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointer
 * @to: character
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	char x;

	to = &x;

	s = to;

}
