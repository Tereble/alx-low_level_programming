#include "main.h"
/**
 * print_number - print single digit numbers
 * Return: always 0
 */
void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
