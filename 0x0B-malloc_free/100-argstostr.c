#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *a, *str;
	int i, j, k, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		a = av[i];
		j = 0;

		while (a[j++])
			l++;
		l++;
	}
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < l; i++)
	{
		a = av[i];
		k = 0;

		while (a[k])
		{
			str[j] = a[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';
	return (str);
}

