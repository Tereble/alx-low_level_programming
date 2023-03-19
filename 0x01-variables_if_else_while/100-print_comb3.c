#include <stdio.h>
/**
 * main - Combinations of different digits,
 * Return: Always 0.
 */
int main(void)
{
	int x;
	int y;
		for (x = 0; x < 9; x++)
		{
			for (y = x + 1; y < 10; y++)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x == 8 && y == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
}
