#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer to be tesed.
 *
 * Return: n % 10.
 */

int print_last_digit(int n)
{
	int last_n;

	last_n = _abs((n % 10));
	_putchar(last_n + '0');
	return (last_n);
}
