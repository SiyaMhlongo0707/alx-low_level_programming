#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - n10 - lowercase
 *
 * Description: prototype void print_alphabet_x1
 * You can only use _putchar twice in your code
 *
 * Return: 0
 */

char print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{

		for  (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		i++;
		_putchar(10);
	}

	return (0);
}


