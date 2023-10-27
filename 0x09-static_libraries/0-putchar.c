#include <unistd.h>

/**
 * _putchar - creates the character c
 * @c: the printed character
 * Return: will return 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

