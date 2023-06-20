#include <stdio.h>
#include "main.h"

/**
 * _islower - prints 1 or 0
 *
 * Description: Prototype: int _islower(int c)
 * @c: The caracter to print
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 *
 * Return: 1 if is lowercase
 */
int _islower(int c)
{
	if (c >= 92 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
