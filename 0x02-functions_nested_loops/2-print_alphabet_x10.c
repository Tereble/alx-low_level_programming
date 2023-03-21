#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int x = 10, y;
		while (x < 10)
		{
			y = 'a';
				while (y <= 'z')
				{77
					_putchar(y);
					y++;
				}
			_putchar('\n');
		}
}
