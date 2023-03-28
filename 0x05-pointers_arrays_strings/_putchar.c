#include "main.h"
#include <unistd.h>
/**
 * _putchar - program to print _putchar
 * @c: the character to print
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
