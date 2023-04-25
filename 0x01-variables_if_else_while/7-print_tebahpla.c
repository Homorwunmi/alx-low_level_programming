#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char bt;

	for (bt = 'z'; bt >= 'a'; bt--)
		putchar(bt);

	putchar ('\n');

	return (0);
}
