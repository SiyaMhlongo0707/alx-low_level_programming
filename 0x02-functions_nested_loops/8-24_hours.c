#include "main.h"

/**
 * jack_bauer - 24h
 *
 * Description:function that prints every minute of the day
 * Prototype: void jack_bauer(void);
 *
 * Return 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hh, mn;

	for (hh = 0 ; hh < 24; hh++)
	{
		for (mn = 0; mn < 60; mn++)
		{
			_putchar(hh / 10 + 48);
			_putchar(hh % 10 + 48);
			_putchar(58);
			_putchar(mn / 10 + 48);
			_putchar(mn % 10 + 48);
			_putchar(10);
		}
	}


}


