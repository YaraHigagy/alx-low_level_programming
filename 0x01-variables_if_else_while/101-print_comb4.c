#include <stdio.h>

/**
 * main - Prints all possible combinations of three digit,
 *	and every three digits are different and unique,
 *	separated by ', ',
 *	followed by a new line.
 *
 * Return: Always (0).
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar('0' + x);
				putchar('0' + y);
				putchar('0' + z);

				if (x == 7 && y == 8 && z == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
