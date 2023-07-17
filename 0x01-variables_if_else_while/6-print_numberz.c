#include <stdio.h>
/**
* main - Entry point
* Description: prints all single digit numbers of base 10 starting from 0
* Return: Always 0 (Success)
*/
int main(void)
{
int numbers = '0';
for (numbers = '0'; numbers <= '9'; numbers++)
putchar(numbers);
putchar('\n');
return (0);
}
