#include "main.h"

/**
 * print_alphabet - program that prints alphabet in lowercase.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet < 123);
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar(10);
}
