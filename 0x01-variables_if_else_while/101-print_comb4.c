#include <stdio.h>

/**
 * main - prints two two digits
 *
 * Description:  prints all possible different combinations of two two digits
 * use the putchar
 *
 * Return: 0;
 */
int main(void)
{
	int num, chif, l, d;


	for (num = 0; num < 1000; num++)
	{
		chif = num / 100;
		d = (num / 10) % 10;
		l = num % 10;

		if (chif < d && d < l)
		{
			putchar(chif + '0');
			putchar(d + '0');
			putchar(l + '0');
			if (num < 700)
			{
				putchar(44);
				putchar(32);
			}

		}
	}

	putchar('\n');
	return (0);

}
