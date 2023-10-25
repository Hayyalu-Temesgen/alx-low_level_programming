#include "main.h"

/**
 * factorial -  the name of the function
 * @n: name of the parameter
 * Return: will return 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

