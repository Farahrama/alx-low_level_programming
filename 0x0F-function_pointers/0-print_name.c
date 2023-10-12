#include "function_pointers.h"
/**
 * print_name_as_is - prints a name
 * @name: name of the person
 * Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if(name && f)
f(name);
}
