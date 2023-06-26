#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
 * _isupper - check for uppercase
 *
 * Description: function for uppercase character
 * @c:uppercase character
 *
 * Return: 1 if c is uppercase
 * returns 0 otherwise
 */
int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}

	return (0);

}
