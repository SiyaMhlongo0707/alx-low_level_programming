#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - list array
 *
 * @a: pointer int
 * @n: array size
 *
 * Return: array value
 */
void print_array(int *a, int n)
{
	int i;


	for (i = 0; i < n; i++)
	{
		*a = a[i];
		printf("%d", *a);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
