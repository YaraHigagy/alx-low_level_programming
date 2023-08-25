#include <stdio.h>

/**
 * main - Prints all numbers of base 10 starting from 0,
 *	without using any variable of type char,
 *	followed by a new line.
 *
 * Return: Always (0).
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	putchar('\n');

	return (0);
}
