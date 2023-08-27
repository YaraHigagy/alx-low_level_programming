#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c.
 *
 * ReturnL On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
