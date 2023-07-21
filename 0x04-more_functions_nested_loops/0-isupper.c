#include "main.h"
/**
 * _isupper - check if c is upper
 * @c: input for alphabet
 * Return: 1 if it's uppercase. 0 if not
*/
int _isupper(int c);
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
