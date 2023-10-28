#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y;
	unsigned int m;

	m = 0;
	if (b == NULL)
		return (0);
	for (y = 0; b[y]; y++) {
		if (b[y] != '0' && b[y] != '1') {
			return (0);
		}
	}
	for (y = 0; b[y]; y++) {
		m *= 2;
		if (b[y] == '1') {
			m += 1;
		}
	}
	return (m);
}
