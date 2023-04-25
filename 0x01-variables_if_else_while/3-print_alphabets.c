#include <stdio.h>

/**
 *  main - print alphabeth in lower and upper case
 *
 *  Return: Always 0
 */
int main(void)
{
	char pt

	for (pt = 'a'; pt <= 'z'; pt++)
		putchar(pt);

	for (pt = "A"; pt <= 'Z'; pt++)
		putchar(pt);

	putchar('\n');

	return (0);
}
