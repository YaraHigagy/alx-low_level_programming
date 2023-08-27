#include <ctype.h>
#include "main.h"

/**
 * _islower -  checks for lowercase character.
 * @c: integer to be tested.
 *
 * ReturnL 1 or 0.
 */

int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
	/* The code below is good to */
	/* return (c >= 97 && c <= 122) */
}
