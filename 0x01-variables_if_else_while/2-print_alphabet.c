#include <stdio.h>

/**
 * main - Prints Alphabet
 *
 * Description: prints the alphabet in lowercase followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';


	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
