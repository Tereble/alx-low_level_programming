#include "main.h"
/**
 * reverse_array - prints an array of integer in reverse
 * @a: array of int
 * @n: number of int to swap
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int x;
		for (x = a[n]; x >= a[0]; x--)
		{
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(x);
		}
}
