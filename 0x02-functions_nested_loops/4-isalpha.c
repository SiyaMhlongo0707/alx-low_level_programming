#include <stdio.h>
#include "main.h"

/**
 * _isalpha - prints 1 or 0
 *
 * Description: Prototype: int _islower(int c)
 * @c: The character to print
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 *
 * Return: 1 if is alpha
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
