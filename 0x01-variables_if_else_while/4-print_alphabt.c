#include <stdio.h>
/**
* main - Entry point
* Description: Prints the alphabet in lowercase,except q and e
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'q')
if (alphabet != 'e')
putchar(alphabet);
}
putchar('\n');
return (0);
}
