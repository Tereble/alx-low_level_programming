#include "main.h"
/**
 * print_sign - check whether positive or negative
 * @n: character to be checked
 * Return: if > zero return 1, = zero return 0 or < zero return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
