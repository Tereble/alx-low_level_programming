#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: if character is lowercase return 1 else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);
}
