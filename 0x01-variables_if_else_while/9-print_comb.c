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
	int i;

	for (i = 48; i <= 57; i++)
	{
				 putchar(i);
				putchar(',');
				putchar(' ');
	}
				return (0);

}
