#include "main.h"
#include <stdio.h>

/**
 * _puts - this function will begin the program
 * @str: the string
 * Return: will return 0 if successful
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

