#include "main.h"

/**
 * _abs- gets the absolute value
 * @c: the number to be computed
 *
 * Return: teh absolute value or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}

