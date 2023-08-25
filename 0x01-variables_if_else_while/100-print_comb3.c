#include <stdio.h>

/**
 * main - Prints all possible combinations of two digit,
 *	and every two digits are different and unique,
 *	separated by ', ',
 *	followed by a new line.
 *
 * Return: Always (0).
 */
int main(void)
{
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			continue;

		for (j = i+1; j < 10; j++)
		{
			if (j != i) {
				putchar('0' + i);
				putchar('0' + j);
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
