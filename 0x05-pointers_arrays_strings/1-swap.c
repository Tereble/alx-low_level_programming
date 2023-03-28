#include "main.h"
/**
 * swap_int - swap values of two integers
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
