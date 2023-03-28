#include "main.h"
/**
 * _strlen - will return the lenght of a string
 * @s: string to be returned
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;
		while (*s != '\0')
		{
			len++;
			s++;
		}
	return (len);
}
