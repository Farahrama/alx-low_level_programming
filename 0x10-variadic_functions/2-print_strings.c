#include "variadic_functions.h"
/**
 * print_strings -  prints strings
 * @separator: A string to be printed between the strings
 * @n: number of strings passed to the function
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
