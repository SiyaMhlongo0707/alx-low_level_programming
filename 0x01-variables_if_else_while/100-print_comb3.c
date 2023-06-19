#include <stdio.h>

/**
 * main - prints two digits
 *
 * Description:  prints all possible different combinations of two digits
 * The two digits must be different
 * use the putchar
 *
 * Return: 0;
 */
int main(void)
{
	int num, chif, d;

	num = 0;

	while (num < 100)
	{
		chif = num % 10;
		d = num / 10;

		if (d < chif)
		{
			putchar(d + '0');
			putchar(chif + '0');

			if (num < 89)
			{
				putchar(44);
				putchar(32);
			}

		}
		num++;

	}
	putchar('\n');
	return (0);

}
