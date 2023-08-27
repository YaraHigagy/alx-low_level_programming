#include <stdio.h>
#include "main.h"

/**
 * main  - computes the absolute value of an integer.
 *
 * Return: 0.
 */

int main(void)
{
	int i, sum3, sum5, sum_total;

	for (i = 3; i < 1023; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += sum3;
		}
		if (i >= 5 && i % 3 == 0)
		{
			sum5 += sum5;
		}
	}
	sum_total = sum3 + sum5;
	printf("%d\n", sum_total);

	return (sum_total);
}
