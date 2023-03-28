#include "main.h"
/**
* _strcpy - copies the string pointed to by src to dest pointer
* @dest: to be pointed at
* @src: to be copied
* Return: pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int x = 0;
		while (x >= 0)
		{
			*(dest + x) = *(src + x);
			if (*(src + x) == '\0')
				break;
			x++;
		}
	return (dest);
}
