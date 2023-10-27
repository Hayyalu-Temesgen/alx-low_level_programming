#include "main.h"

/**
 * _strlen_recursion - the name of the function
 * @s: parameter of the function
 * Return: will always return 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
