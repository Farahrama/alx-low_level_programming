#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int differnce, result;
unsigned int l, y;
l = 0;
result = 1;
differnce = n ^ m;
for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
{
if (result == (differnce & result))
l++;
result <<= 1;
}
return (l);
}
