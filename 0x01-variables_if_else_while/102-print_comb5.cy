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
	int i = 0, j = 0, u = 0, v = 0;

	while (i < 10 && j < 10 && u < 10 && v < 10)
	{
		v++;
		if (j == 9)
			j = 0;
			i++;
		if (u == 9)
			u = 0;
			j++;
		if (v == 9)
			v = 0;
			u++;
		putchar('0' + i);
		putchar('0' + j);
		putchar(' ');
		putchar('0' + u);
		putchar('0' + v);

		if (i != 9 && j != 8 && u != 9 && v !=9)
			putchar(',');
			putchar(' ');
	}

	putchar('\n');

	return (0);
}
