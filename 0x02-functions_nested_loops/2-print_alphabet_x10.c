#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char x, y;
		for (x = 10; x < 10; x++)
		{
				for(y = 'a'; y <= 'z'; y++)
				{
					_putchar(y);
				}
			_putchar('\n');
		}
}
