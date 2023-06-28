#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 *
 * Description: prints a string, followed by a new line, to stdout.
 * @str: pointer string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int a = 0;


	while (str[a] != '\0')
	{

		_putchar(str[a]);
		a++;
	}

	_putchar(10);
}
