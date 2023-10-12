#include "variadic_functions.h"
/**
 * print_strings - prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of number of unnamed parameters
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *c;
unsigned int i;
va_list sep;
va_start(sep, n);
if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
{
c = va_arg(sep, char*);
if (c == NULL)
c = "(nil)";
printf("%s", c);
if (i < n -1)
printf("%s", separator);
}
printf("\n");
va_end(sep);
}
