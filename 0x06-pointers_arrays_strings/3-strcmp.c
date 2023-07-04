#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _strcmp - compares
 *
 * @s1: pointer type char
 * @s2: pointer type char
 *
 * Return: dest.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int mp = 0;


	while (mp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		mp = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (mp);

}
