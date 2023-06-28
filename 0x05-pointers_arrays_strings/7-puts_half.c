#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - length
 *
 * Description: Returns length of a string
 *
 * @str: pointer char
 *
 * Return: 0;
 */
void puts_half(char *str)
{
	int a, b = 0;
	char c;

	for (a = 0; str[a] != '\0'; a++)
	{
		a++;
	}
	if (a % 2 == 0)
	{
		b = a / 2;
	}
	else
	{
		b = (a - 1) / 2;
	}
	for (a = b; str[a]; a++)
	{
		c = str[a];
		_putchar(c);
	}
	_putchar(10);
}
