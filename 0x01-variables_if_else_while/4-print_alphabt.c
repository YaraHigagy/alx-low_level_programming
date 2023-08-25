#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e,
 *	followed by a new line.
 *
 * Return: Always (0).
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		if (x != 'e' && x != 'q')
			putchar(x);
	putchar('\n');

	return (0);
}
