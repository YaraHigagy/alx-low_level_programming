#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers,
 *	separated by ', ',
 *	followed by a new line.
 *
 * Return: Always (0).
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
		if (x == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
