#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source string
 * @n: the n lenght to be appended
 * Return: &dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char x[100];
	int y, z;
		while (dest[y] != '\0')
		{
			x[z] = dest[y];
			y++;
			z++;
		}
		y = 0;
		if (src[y] >= src[n])
		{
			while (src[y] <= src[n])
			{
				x[z] = src[y];
				y++;
				z++;
			}
		}
		else
		{
			while (src[y] != '\0')
			{
				x[z] = src[y];
				y++;
				z++;
			}
		}
	x[z] = '\0';
	dest = x;
	return (dest);
}
