#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: first string
 * @src: string to be appended
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	char x[98];
	int y = 0, z = 0;
		while (dest[y] != '\0')
		{
			x[z] = dest[y];
			y++;
			z++;
		}
		y = 0;
		while (src[y] != '\0')
		{
			x[z] = src[y];
			y++;
			z++;
		}
		x[z] = '0';
	dest = x;
	return (dest);
}
