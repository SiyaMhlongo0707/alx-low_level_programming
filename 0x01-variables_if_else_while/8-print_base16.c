#include <stdio.h>

/**
 * main - print number base16
 *
 * Description: prints all the numbers of base 16 in lowercase,
 *
 * Return: 0
 */
int main(void)
{
	char b;
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}

