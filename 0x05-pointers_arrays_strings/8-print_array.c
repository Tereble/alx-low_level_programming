#include "main.h"
/**
 * print_array - prints n element of array of an integer
 * @a: elements to be printed
 * @n: number of elements
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;
		for (; i < n; i++)
		{
			printf("%d", *(a + i));
			if (i != (n - 1))
				printf(", ");
		}
	printf("\n");
}
