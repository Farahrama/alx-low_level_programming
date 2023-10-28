#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int m;

	m = 0;
	if (!b)
		return (0);
	for (y = 0; b[y] != '\0'; y++)
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);
	}
	for (y = 0; b[y] != '\0'; y++)
	{
		m <<= 1;
		if (b[y] == '1')
			m += 1;
	}
	return (m);
}
