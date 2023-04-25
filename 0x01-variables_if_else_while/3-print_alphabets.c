#include <stdio.h>

/**
 *  main - print alphabeth in lower and upper case
 *
 *  Return: Always 0
 */
int main(void)
{
	char c,h

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (h = "A"; h <= 'Z'; h++)
		putchar(h);

	putchar('\n');

	return (0);
}
