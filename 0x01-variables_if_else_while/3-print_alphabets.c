#include <stdio.h>
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
				putchar(small, x);
		}
	return (0);
}