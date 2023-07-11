#include "main.h"

/**
 * _atoi - converts a string into an integer.
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int alpha = 1, a = 0;
	unsigned int num = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			alpha *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		num = (num * 10) + (s[a] - '0');
		a++;
	}
	num *= alpha;
	return (num);
}
