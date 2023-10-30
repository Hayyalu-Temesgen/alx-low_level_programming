#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an arry of chars,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the character
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

