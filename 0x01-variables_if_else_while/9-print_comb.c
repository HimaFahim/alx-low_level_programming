#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints all possible combinations of single-digit
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;
	int b = 0;

	for (; i <= 9; i++)
	{
		 for (; b <= 9; b++)
			 if (i > b)
				 putchar(i);
				putchar(',');
				putchar(32);
				putchar(b);
				return (0);
	}
}

