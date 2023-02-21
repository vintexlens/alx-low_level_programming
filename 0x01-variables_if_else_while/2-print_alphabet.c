#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 97;

	while (x < 123)
	{
		putchar(x);
		x++;
	}
	putchar(26);

	return (0);
}
