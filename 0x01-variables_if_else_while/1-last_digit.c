#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if (n % 10 == 0)
		printf("Last digit of %d and is 0\n", n);
	else if (n % 10 < 6 && n % 10 != 0)
		printf("Last digit of %d and is less than 6 and not 0\n", n);
		return (0);
}