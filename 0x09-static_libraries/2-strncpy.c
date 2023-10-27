#include "main.h"

/**
 * _strncpy - this function will copy the string
 * @dest: the first input
 * @src: the second input 
 * @n: the input value
 * Return: will return 0 if successful
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

