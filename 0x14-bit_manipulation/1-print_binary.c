#include "main.h"

/**
 * _pow - a function that calculates
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, chk;
	char f;

	f = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		chk = n & div;
		if (chk == div)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}

