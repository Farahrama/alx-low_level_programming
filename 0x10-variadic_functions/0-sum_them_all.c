#include "variadic_functions.h"
/**
 * sum_them_all - sums variable arguments
 * @n: the number of arguments
 * @...: the integers to sum
 * return: the integer sum
 *
*/
int sum_them_all(const unsigned int n, ...)
{
int i = n, sum = 0;
va_list args;
if (!n)
return (0);
va_start (args, n);
while (i--)
sum += va_arg (args, int);
va_end (args);
return (sum);
}
