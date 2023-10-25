#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - return the natural square root
 * @n: the number to calculate suqare root
 * Return: will return 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recursion of the square root
 * @n: the number to calculate the square root
 * @i: the iterator
 * Return: will return 0
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

