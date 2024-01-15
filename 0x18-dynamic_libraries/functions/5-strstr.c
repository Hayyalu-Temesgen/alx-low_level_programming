#include "main.h"

/**
 * _strstr - this function will strat the program
 * @haystack: the input required
 * @needle: the input required
 * Return: will return 0 if successful
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

