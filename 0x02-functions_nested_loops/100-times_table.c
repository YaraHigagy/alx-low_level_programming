#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times tble, starting with 0.
 * @n: integer to be tested.
 *
 * Return: 0.
 */

void print_times_table(int n)
{
	int i, j, mul, r;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar('0');
					continue;
				}
				mul = i * j;
				_putchar(',');
				_putchar(' ');
				if (mul >= 100)
				{
					r = mul / 10;
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
					_putchar(mul % 10 + '0');
				}
				else if (mul >= 10 && mul < 100)
				{
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
			}
			_putchar('\n');
		}
	}
}
