#include <stdio.h>
#include <ctype.h>
/**
 * main - single digits of base 10 using putchar
 * Returns: Always 0
 */
int main(void)
{
	int x;
		for (x = 0; x < 10; x++)
			putchar('0' + x);
		putchar('\n');
		return (0);
}
