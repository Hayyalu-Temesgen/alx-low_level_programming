#include "main.h"

/**
 * _strspn - this function will begin the program
 * @s: the value given
 * @accept: another value given
 * Return: will return 0 if successful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

