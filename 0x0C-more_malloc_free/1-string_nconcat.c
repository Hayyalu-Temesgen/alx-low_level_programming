#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of elements
 * Return: points to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, k;
	char *a;

	if (s1 == NULL)
		i = 0;
	else
	{
	for (i = 0; s1[i] != '\0'; i++)
		;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
	for (j = 0; s2[j] != '\0'; j++)
		;
	}
	if (j > n)
		j = n;

	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		a[k] = s1[k];
	for (k = 0; k < j; k++)
		a[k + 1] = s2[k];
	a[i + j] = '\0';
	return (a);
}

