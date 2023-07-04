#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies
 *
 * @dest: pointer int
 * @src: pointer int
 * @n: unsigned int
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
