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
	int i = 48;
	int b = 48;

	for (; i <= 48+9; i++)
	{
		for (; b <= 48+9; b++)
		{
			if (i < b && i != b)
			{
				putchar(i);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
		return (0);
}
