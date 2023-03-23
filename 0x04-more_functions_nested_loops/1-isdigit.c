#include "main.h"
/**
 * _isdigit - checks for digit 0 to 9
 * @c: integer to be checked
 * Return: return 1 if c is a single digit, return 0 otherwise
 */
int _isdigit(int c)
{
	for (c = 0; c <= 9; c++)
	{
		if (isdigit(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
