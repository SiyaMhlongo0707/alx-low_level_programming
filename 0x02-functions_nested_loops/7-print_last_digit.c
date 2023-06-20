#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - number
 *
 * Description: Prototype: int print_last_digit(int);
 * Returns the value of the last digit
 *@d: print last digit
 * Return: last digit
 * return 0
 */
int print_last_digit(int d)
{
	d = d % 10;
	_putchar(d);
	_putchar(10);

	return (0);
}
