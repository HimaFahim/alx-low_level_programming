#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char i = 'a';

	for (; i <= 'z' && i != 'q' && i != 'e'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
