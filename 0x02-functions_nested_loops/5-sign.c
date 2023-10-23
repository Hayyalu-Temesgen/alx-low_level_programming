#include "main.h"

/**
 * print_sign - it will print the sign of a number
 * @n: it will check the number
 *
 * Return: will return 1 for positive number - -1 for negative - 0 for zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

