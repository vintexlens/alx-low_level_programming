#include "main.h"

/**
 * get_endianness - checks for endianness.
 *
 * Return: Depends on Condition
*/

int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return ((int)*c);
}
