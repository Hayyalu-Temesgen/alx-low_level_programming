#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if an int is prime or not
 * @n: the number to evaluate
 * Return: always 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if the int is prime
 * @n: the number to evaluate
 * @i: the iterator
 * Return: always 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

