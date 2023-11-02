#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of block of memory
 * @size: the size of an element
 * Return: always return 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return (a);
}

