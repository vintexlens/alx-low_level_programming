#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program will assign a random number to the variable n
 * return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* print whether the number stored in the variable n is positive or negative. */
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

	return (0);
}
