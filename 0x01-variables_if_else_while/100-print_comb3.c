#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 10; a++)
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
