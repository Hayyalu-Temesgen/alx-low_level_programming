#include "main.h"

/**
 * _isalpha - this function will check alphabetic character
 * @c: the value to be checked
 * Return: will return 0 if successful
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

