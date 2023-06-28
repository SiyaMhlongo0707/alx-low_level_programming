#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse string
 *
 * @s: pointer string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0, max, half;
	char first, last;


	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
