#include <stdio.h>
/**
* main - Entry point
* Description: prints all the numbers of base 16 in lowercase
* Return: Always 0 (Success)
*/
int main(void)
{
int numbers = '0';
char alphabet;
for (numbers = '0'; numbers <= '9'; numbers++)
putchar(numbers);
for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
