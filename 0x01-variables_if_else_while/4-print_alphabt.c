#include <stdio.h>
#include <ctype.h>
/**
 * main - print alphabet a to z without e and q
 * Return: Always 0
 */
int main(void)
{
	char x;
		for (x = 'a'; x <= 'z'; x++)
		{
			if (x != 'e' && x != 'q')
				putchar(x);
		}
		putchar('\n');
		return (0);
}
