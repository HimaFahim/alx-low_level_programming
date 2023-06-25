#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:a program that prints the alphabet in lowercase and uppercase
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	for (; x <= 'z'; x++)
	putchar(x);
	for (; y <= 'Z'; y++)
	putchar(y);
	putchar('\n');
	return (0);
}
