#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: first string
 * @src: string to be appended
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int y = 0, z = 0;
		while (dest[y] != '\0')
		{
			y++;
		}
		while (src[z] != '\0')
		{
			dest[y] = src[z];
			y++;
			z++;
		}
	dest[y] = '\0';
	return (dest);
}
