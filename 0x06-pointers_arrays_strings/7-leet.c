#include "main.h"
#include <stdio.h>

/**
 * leet - encodes
 *
 * Description: Encodes a string into 1337
 * @e: pointer type char
 *
 * Return: e
 */

char *leet(char *e)
{
	char *cp = e;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*e)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*e == key[i] || *e == key[i] + 32)
			{
				*e = 48 + value[i];
			}
		}
		e++;
	}

	return (cp);
}
