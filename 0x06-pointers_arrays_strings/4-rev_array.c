#include "main.h"
/**
 * reverse_array - prints an array of integer in reverse
 * @a: array of int
 * @n: number of int to swap
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int x, y;
		for (x = 0; x < n--; x++)
		{
			y = a[x];
			a[x] = a[n];
			a[n] = y
		}
}
