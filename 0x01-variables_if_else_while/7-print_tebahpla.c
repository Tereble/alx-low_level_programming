#include <stdio.h>
#include <ctype.h>
/**
 * main - lowercase in reverse order
 * Return: Always 0
 */
int main(void)
{
	char x;
		for (x = 'z'; x > 'a'; x--)
			putchar(x);
		putchar('\n');
		return (0);
}
