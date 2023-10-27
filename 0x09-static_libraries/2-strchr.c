#include "main.h"
/**
 * _strchr - this function will be the entry point
 * @s: the first input
 * @c: the second input
 * Return: will return 0 if successful
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
