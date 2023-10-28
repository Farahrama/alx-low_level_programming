#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if the input is invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0;

	if (!b) {
		return 0;
	}

	for (int i = 0; b[i] != '\0'; i++) {
		if (b[i] != '0' && b[i] != '1') {
			return 0;
		}

		m = (m << 1) | (b[i] - '0');
	}
	return m;
}
