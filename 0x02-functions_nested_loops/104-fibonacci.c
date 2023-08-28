#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *	separated by comma, foloowed by a space,
 *	and followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	float  f_1 = 1, f_2 = 2, f;

	printf("1, 2");

	for (i = 4; i <= 51; i++)
	{
		f = f_1 + f_2;

		printf(", %.0f", f);

		f_1 = f_2;
		f_2 = f;
	}

	printf("\n");

	return (0);
}
