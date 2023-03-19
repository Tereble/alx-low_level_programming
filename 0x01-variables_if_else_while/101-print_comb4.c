#include <stdio.h>
/**
 * main - combination of three digits
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;
	int z;
		for (x = 0; x < 5; x++)
		{
			for (y = x + 1; y < 7; y++)
			{
				for (z = y + 1; z < 10; z++)
				{
					putchar('0' + x);
					putchar('0' + y);
					putchar('0' + z);
					if (x == 4 && y == 6 && z == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
}
