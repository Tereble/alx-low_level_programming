#include <stdio.h>
/**
 * main - two two-digit combination
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;
		for (x = 0; x < 10; x++)
		{
			for (y = 0; y < 10; y++)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x == 9 && y == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
}
