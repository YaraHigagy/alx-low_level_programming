#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit,
 *	each combination of digits is unique,
 *	separated by ' ' within the combination and by ', ' between them,
 *	followed by a new line.
 *
 * Return: Always (0).
 */
int main(void)
{
	int i, j, u, v;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (u = j + 1; u < 10; u++)
			{
				for (v = u + 1; v < 10; v++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + u);
					putchar('0' + v);

					if (i == 9 && j == 8 && u == 9 && v == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
