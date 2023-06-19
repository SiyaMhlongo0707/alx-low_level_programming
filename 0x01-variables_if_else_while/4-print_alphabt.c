#include <stdio.h>

/**
 * main - print alphabt
 *
 * Description: program that prints the alphabet in lowercase whitout e and q
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';


	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);

	}
	putchar('\n');

	return (0);
}
