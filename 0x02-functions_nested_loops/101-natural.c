#include <stdio.h>
#include "main.h"

/**
 * sumMul - computes the sum of numbers that are multiples of specific number.
 * @start: the start number.
 * @end: the end number.
 * @step: the number of steps.
 *
 * Return: sum.
 */

int sumMul(int start, int end, int step)
{
	int i, sum = 0;

	for (i = start; i < end; i += step)
	{
		sum += i;
	}

	return (sum);
}

/**
 * main - prints the sum of all numbers under 1024
 * that are divisible by 3 ar 5 but not 15.
 *
 * Return: 0.
 */

int main(void)
{
	/**
	*int i, sum3 = 0, sum5 = 0, sum15 = 0, sum_total;
	*
	*for (i = 0; i < 1023; i++)
	*{
	*	if (i >= 3 && i % 3 == 0)
	*	{
	*		sum3 += i;
	*	}
	*	if (i >= 5 && i % 5 == 0)
	*	{
	*		sum5 += i;
	*	}
	*	if (i >=15 && i % 15 == 0)
	*	{
	*		sum15 += i;
	*	}
	*}
	*sum_total = sum3 + sum5 - sum15;
	*printf("%d\n", sum_total);
	*/

	int sum3, sum5, sum15, sum_total;

	sum3 = sumMul(3, 1024, 3);
	sum5 = sumMul(5, 1024, 5);
	sum15 = sumMul(15, 1024, 15);
	sum_total = sum3 + sum5 - sum15;

	printf("%d\n", sum_total);

	return (0);
}
