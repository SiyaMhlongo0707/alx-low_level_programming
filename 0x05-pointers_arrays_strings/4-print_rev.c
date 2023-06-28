#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string
 *
 * Description: prints a string reverse, followed by a new line
 * @s: pointer string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}

	_putchar(10);
}
