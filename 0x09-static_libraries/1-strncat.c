#include "main.h"

/**
 * _strncat - this function will concatenate the two strings
 * @dest: the value of the input
 * @src: the source of the input
 * @n: the value of the input
 * Return: will return the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

