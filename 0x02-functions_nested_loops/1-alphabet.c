#include "main.h"
/**
 * main - Entry point
 * Description: prints the alphabet, in lowercase, followed by a new line
 * Return: 0 Always (Success)
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
