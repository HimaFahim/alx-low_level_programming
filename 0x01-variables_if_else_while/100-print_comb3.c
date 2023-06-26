#include <stdio.h>

/**
 * main - entry point
 *
 * Description:a program that prints all possible different combinations
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i, b;

	for (i = 48; i < 58; i++)
	{
		for (b = 48; b < 58; b++)
		{
			if (i < b && i != b)
			{
				putchar(i);
				putchar(b);
				if (i + b != 113)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
		return (0);
}
