#include "variadic_functions.h"
/**
 * print_all - prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
*/
void print_all(const char * const format, ...)
{
int i;
int nb;
char *vi;
va_list args;
va_start(args, format);
i = 0;
while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
nb = 0;
break;
case 'i':
printf("%i", va_arg(args, int));
nb = 0;
break;
case 'f':
printf("%f", va_arg(args, double));
nb = 0;
break;
case 's':
vi = va_arg(args, char*);
if (vi == NULL)
vi = "(nil)";
printf("%s", vi);
nb = 0;
break;
default:
nb = 1;
break;
}
if (format[i + 1] != '\0' && nb == 0)
printf(", ");
i++;
}
printf("\n");
va_end(args);
}
