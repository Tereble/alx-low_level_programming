#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed from
 * Return: nothing
 */
void puts_half(char *str)
{
	int x = 0, i;
		while (x >= 0)
		{
			if (str[x] == '\0')
				break;
			x++;
		}
		if (x % 2 == 1)
			i = x / 2;
		else
			i = (x - 1) / 2;
		for (i++; i < x; i++)
			_putchar(str[i]);
	_putchar('\n');
}
