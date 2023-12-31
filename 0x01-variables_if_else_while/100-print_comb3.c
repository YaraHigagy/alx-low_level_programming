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
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
