#include "main.h"
/**
 * _strcat - concatenates the two strings that is given
 * @dest: the first input
 * @src: the second input
 *
 * Return: will return 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

