#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	char i = 'z';

	for (; i >= 'a'; i--)
		putchar(i);
	return (0);
}
