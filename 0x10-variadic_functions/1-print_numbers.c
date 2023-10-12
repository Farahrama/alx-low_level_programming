#include "variadic_functions.h"
/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: the string separator
 * @n: the number of integers
 * @...: the integers to print
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i = n;
va_list sep;
if(!n)
printf("\n");
return;
va_start(sep, n);
while (i--)
printf("%d%s", va_arg(sep, int),
i ? (separator ? separator : "") : "\n");
va_end(sep);
}
