#include <stdio.h>
/**
* main - Entry point
* Description: Prints the alphabet in lowercase, and then in uppercase
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);
alphabet++;
putchar('\n');
return (0);
}
