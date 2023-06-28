#include "main.h"
#include <stdio.h>

/**
 * swap_int - pointer swaps
 *
 * @a: integer
 * @b: integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int sauva = *a;
	*a = *b;
	*b = sauva;
}
