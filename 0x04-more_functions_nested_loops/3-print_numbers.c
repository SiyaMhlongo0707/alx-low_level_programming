#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
 * print_numbers - number
 *
 * Description:  prints the numbers, from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}



