#include <stdio.h>

/**
 * main - prints number
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(48 + n);
	putchar('\n');


	return (0);
}
