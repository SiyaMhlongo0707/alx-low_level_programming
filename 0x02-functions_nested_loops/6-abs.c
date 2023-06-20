#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value
 *
 * Prototype: int _abs(int)
 * @b: the integer to print
 *
 * Return: 1 if success
 *return 0 if false
 */
int _abs(int b)
{

	if (b >= 0)
	{
		return (b);
	}
	else if (b < 0)
	{
		return (-b);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}

