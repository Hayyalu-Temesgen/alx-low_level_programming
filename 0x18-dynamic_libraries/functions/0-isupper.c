#include "main.h"

/**
 * _isupper - will show the uppercase letters
 * @c: the character to check
 * Return: if successful will return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

