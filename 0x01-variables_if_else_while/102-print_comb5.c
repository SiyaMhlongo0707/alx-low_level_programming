#include <stdio.h>

/**
 * main - print two two digits
 *
 * Description: The numbers should range from 0 to 99
 * l numbers should be printed with two digits. 1 should be printed as 01
 *
 * Return: 0
 */
int main(void)
{
	int num, c, k, l;
	int m, n;

	for (m = 0; m < 100; m++)
	{
		num = m / 10;
		c = m % 10;
		for (n = 0; n < 100; n++)
		{
			k = n / 10;
			l = n % 10;
			if (num < k || (num == k && c < l))
			{
				putchar(num + '0');
				putchar(c + '0');
				putchar(32);
				putchar(k + '0');
				putchar(l + '0');
				if (!(num == 9 && c == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');


	return (0);
}
