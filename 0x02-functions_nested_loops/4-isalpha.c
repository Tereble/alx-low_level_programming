#include "main.h"
/**
 * _isalpha - check if its an alphabet
 * @c: character to be checked
 * Return: if c is a alphabet return 1 otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
