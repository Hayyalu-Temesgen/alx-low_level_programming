#include <stdio.h>

/**
 * main - this function will print the name
 * @argc: argument count
 * #argv: argument vector
 * Return: will return 0 if successful
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

