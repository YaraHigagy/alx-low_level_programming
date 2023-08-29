#include <stdlib.h>
#include <stdio.h>

/**
 * positive_or_negative - Prints whether the number stored in the variable n is:
 *		positive, negative, or zero.
 * Return: Always (0).
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
