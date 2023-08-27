#include "main.h"

/**
 * times_tabl - prints the 9 times tble, starting with 0.
 *
 * Return: 0.
 */

void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				continue;
			}
			mul = i * j;
			_putchar(',');
			_putchar(' ');
			if (mul >= 10)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}
