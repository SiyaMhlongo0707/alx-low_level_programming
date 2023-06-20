#include <stdio.h>
#include "main.h"
/**
 * main - _putchar - prints
 *
 * Description: prints _putchar, followed by a new line.
 * You are allowed to use _putchar
 * You are not allowed to use global variables
 *
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	char a[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < sizeof(a); i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');

	return (0);
}

