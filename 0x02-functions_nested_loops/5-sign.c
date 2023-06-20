#include <stdio.h>
#include "main.h"

/**
 * print_sign- prints 1 or 0
 *
 * Description:Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * @n: The character to print
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 *
 * Return: 1 is great than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

	_putchar(10);

}
