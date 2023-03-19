#include <stdio.h>
#include <ctype.h>
/**
 * main - all hexadecimals
 * Return: Always 0
 */
int main(void)
{
	char x;
	int y;
		for (y = 0; y < 10; y++)
			putchar('0' + y);
		for (x = 'a'; x <= 'f'; x++)
			putchar(x);
		putchar('\n');
		return (0);
}
