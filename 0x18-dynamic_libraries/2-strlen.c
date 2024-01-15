#include "main.h"

/**
 * _strlen - this function will return the length of the string
 * @s: the value of the string
 * Return: will return 0 if successful
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

