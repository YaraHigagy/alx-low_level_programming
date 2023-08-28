#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of even Fibonacci numbers, starting with 1 and 2,
 *	not exceeding 4,000,000,
 *	and followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	long  f_1 = 1, f_2 = 2, f, sum = f_2;

	while (f_2 < 4000000)
	{
		f = f_1 + f_2;
		f_1 = f_2;
		f_2 = f;

		if (f % 2 == 0)
			sum += f_2;
	}

	printf("%lu\n", sum);

	return (0);
}
