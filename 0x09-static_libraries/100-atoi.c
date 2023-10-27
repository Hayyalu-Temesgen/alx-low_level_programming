#include "main.h"

/**
 * _atoi - this function will convert the string to integer
 * @s: the string to be converted
 * Return: will return 0 if successful
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;
	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}

