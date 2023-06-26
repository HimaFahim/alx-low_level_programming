#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  a program that prints all the numbers of base 16
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 48;
	int b = 97;

	for (; i <= 57; i++)
		putchar(i);
	for (; b <= 97 + 5; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
