#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int code = 0;

	while (*s != '\0')
	{
		code++;
		s++;
	}
	return (code);
}
