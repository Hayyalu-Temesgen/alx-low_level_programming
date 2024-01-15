#include "main.h"

/**
 * char *_strcpy - this function copies the string
 * @dest: the destination of the copied string
 * @src: the source of the copied string
 * Return: will return 0 if successful
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

