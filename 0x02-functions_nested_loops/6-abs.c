#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer to be tesed.
 *
 * Return: abs(n).
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
