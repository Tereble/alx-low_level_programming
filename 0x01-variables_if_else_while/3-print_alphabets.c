#include <stdio.h>
/**
 * main - Entry
 * Returns Always 0
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);
		
		putchar(small);
	}
	return (0);
}
