#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: size
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char* x = dest;
		while (*src && n--)
		{
			*dest = *src;
			dest++;
			src++;
		}
	*dest = '\0';
	return (x);
}
