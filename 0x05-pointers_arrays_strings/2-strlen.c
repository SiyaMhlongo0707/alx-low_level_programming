#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - length
 *
 * Description: Returns length of a string
 *
 * @s: pointer char
 *
 * Return: 0;
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);


}
