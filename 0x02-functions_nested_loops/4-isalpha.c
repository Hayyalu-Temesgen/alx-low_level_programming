#include "main.h"

/**
 * _isalpha - checks the alphabet character
 * @c: checks the character
 *
 * Return: will return 1 for alphabet character - 0 will return anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

