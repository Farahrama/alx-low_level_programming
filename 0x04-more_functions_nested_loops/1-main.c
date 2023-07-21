#include "main.h"
#include <stdio.h>
/**
 * _isdigit - for a digit numbers
 * @c: char to checked
 * Return: 1 or 0
*/
int main(void)
{
char c;
c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));
return (0);
}
