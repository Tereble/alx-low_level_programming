#include "main.h"
/**
 * leet - encodes a string into 1337
 * @x: the encoding
 * Return: returns x
 */
char *leet(char *x)
{
	int y, z;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";
		for (y = 0; x[y] != '\0'; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x[y] == str1[z])
				{
					x[y] = str2[z];
				}
			}
		}
	return (x);
}
