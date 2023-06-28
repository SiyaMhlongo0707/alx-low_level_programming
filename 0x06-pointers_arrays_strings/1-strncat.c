#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _strncat - concactenates
 *
 * @dest: pointer type char
 * @src: pointer type char
 * @n: integer
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, b = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (b < n)
	{
		*(dest + i) = *(src + b);
		if (src[b] == '\0')
		{
			break;
		}
		i++;
		b++;
	}

	return (dest);
}
