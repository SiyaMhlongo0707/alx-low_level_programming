#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _strcat - concactenates
 *
 * @dest: pointer type char
 * @src: pointer type char
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, b = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (b >= 0)
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
