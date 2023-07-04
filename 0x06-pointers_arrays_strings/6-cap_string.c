#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes
 *
 * @s: pointer type char
 *
 * Return: string
 */
char *cap_string(char *s)
{
	char *p = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (delimiter(*s))
		{
			foundDelimit = 1;
		}
		else if (lower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
		{
			foundDelimit = 0;
		}
		s++;
	}

	return (p);
}

/**
 * lower - lowercase
 *
 * Description: determines if is lowercase
 * @c: character type char
 *
 * Return: true or false
 */

int lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * delimiter - determines_limite
 *
 * @c: charatere type char
 *
 * Return: 1 fortrue or false
 */

int delimiter(char c)
{
	int i;
	char limit[] =  " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == limit[i])
		{
			return (1);
		}
	}

	return (0);
}

