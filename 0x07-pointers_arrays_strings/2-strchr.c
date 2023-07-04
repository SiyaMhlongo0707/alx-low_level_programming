#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates
 *
 * @s: pointer char
 * @c: characer
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) != c)
	{
		return (NULL);
	}

	return (s + i);
}
