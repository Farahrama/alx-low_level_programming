#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search in
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && size && cmp)
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}
