#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
 * _isdigit - check for a digit
 *
 * Description: function for a digit
 * @c:digit
 *
 * Return: 1 if c is a digit
 * returns 0 otherwise
 */
int _isdigit(int c)
{

	if (isdigit(c))
	{
		return (1);
	}

	return (0);

}
