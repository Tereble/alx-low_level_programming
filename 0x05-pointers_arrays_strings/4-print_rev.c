#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: the reverse string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int x = 0;
		while (x >= 0)
		{
			if (s[x] == '\0')
			{
				break;
			x++;
			}
			for (x--; x >= 0; x--)
				_putchar(s[x]);
			_putchar('\n');
		}
}
