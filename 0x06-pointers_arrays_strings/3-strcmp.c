#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: if equal return 0 else return 1
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
		while (s1[x] != '\0' && s2[x] != '\0')
		{
			if (*s1 == *s2)
			{
				s1++;
				s2++;
			}
			else if ((*s1 == '\0' && *s2 != '\0') ||
				(*s1 != '\0' && *s2 == '\0') || *s1 != *s2)
			{
				return (s1[x] - s2[x]);
			}
			x++;
		}
	return (0);
}
