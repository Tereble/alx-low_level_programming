#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int x;
		for (x = 'A'; x <= 'Z'; x++)
		{
			char small = tolower(x);
				putchar(small, x'\n');
		}
	return (0);
}
