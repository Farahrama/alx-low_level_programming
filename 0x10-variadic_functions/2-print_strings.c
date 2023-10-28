#include "variadic_functions.h"
/**
 * print_strings - prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of number of un named parameters
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *c;
unsigned int i;
va_list ap;
va_start(ap, n);
if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
{
c = va_arg(ap, char*);
if (c == NULL)
c = "(nil)";
printf("%s", c);
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
