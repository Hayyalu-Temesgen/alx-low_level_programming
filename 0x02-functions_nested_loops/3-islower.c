#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: checked character
 * Return: 1 if lowercase character - 0 for other
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

