#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: the character to print
 *
 * Return: if successful it will return 1, if error occurs it will return -1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
