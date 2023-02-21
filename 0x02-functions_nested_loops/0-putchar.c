#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes a program that prints _putchar
 * @c: The character to print
 *
 * Return: On success 0.
 */
int _putchar(char c)
{
	return (write(&c));
}

int main()
{
	_putchar ("_putchar");
}
