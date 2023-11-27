#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t rd, rw;
	char *a;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	a = malloc(sizeof(char) * (letters));
	if (!a)
		return (0);

	rd = read(i, a, letters);
	rw = write(STDOUT_FILENO, a, rd);

	close(i);

	free(a);

	return (rw);
}

