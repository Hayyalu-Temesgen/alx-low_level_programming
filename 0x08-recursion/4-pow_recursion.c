#include "main.h"

/**
 * _pow_recursion - the name of the function
 * @x: the name of the first parameter
 * @y: the name of the second parameter
 * Return: will always return 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}

