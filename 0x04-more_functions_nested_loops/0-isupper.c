#include "main.h"
/**
 * _isupper - checks if c is an uppercase character
 * @c: integer to be checked
 * Return: If c is uppercase return 1 otherwise return 0
 */
int _isupper(int c)
{
	c = 'A';
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
