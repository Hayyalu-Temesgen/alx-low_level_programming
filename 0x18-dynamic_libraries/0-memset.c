#include "main.h"

/**
 * _memset - the specific value
 * @s: memory that is is stored
 * @b: value needed
 * @n: byte number
 *
 * Return: will return the the value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

