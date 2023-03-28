#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: string to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int x = 0, a, b;
	char *ch, str;
		while (x >= 0)
	{
		if (s[x] == '\0')
			break;
		x++;
	}
	ch = s;
	for (a = 0; a < (x - 1); x++)
	{
		for (b = a + 1; b > 0; b--)
		{
			str = *(ch + b);
			*(ch + b) = *(ch + (b - 1));
			*(ch + (b - 1)) = str;
		}
	}
}
