#include <ctype.h>
#include "main.h"

/**
 * _isalpha -  returns 1 if c is an alphabetic character 0 otherwise.
 * @c: integer to be tested.
 *
 * Return: 1 or 0.
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
