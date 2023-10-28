#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int dev, re;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
dev = 1 << index;
re = n & dev;
if (re == dev)
return (1);
return (0);
}
