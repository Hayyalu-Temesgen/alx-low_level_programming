#include "main.h"

/**
 * _memcpy - where the function copies the memory
 * @dest: stored memory location
 * @src: copies memory location
 * @n: bytes
 * Return: will return the bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;
	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
