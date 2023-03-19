#include <stdio.h>
#include <ctype.h>
/**
 * main - lower and uppercase
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;
		for (x = 'a'; x <= 'z'; x++)
			putchar(x);
		for (y = 'A'; y <= 'Z'; y++)
			putchar(y);
		putchar('\n');
	return (0);
}
