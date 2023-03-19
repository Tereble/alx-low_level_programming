#include <stdio.h>
/**
 * main - all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int x;
		for (x = 0; x < 10; x++)
			putchar('0' + x);
			putchar(',');
			putchar(' ');
		putchar('\n');
		return (0);
}
