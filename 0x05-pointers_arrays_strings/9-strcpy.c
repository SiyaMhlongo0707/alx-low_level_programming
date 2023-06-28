#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copy
 *
 * @dest: destination copy
 * @src: source copy
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = *(src + n);
	}
	dest[n] = '\0';

	return (dest);
}

