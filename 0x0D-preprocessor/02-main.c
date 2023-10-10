#include <stdio.h>
/**
 * main - print the name of the file it was compiled from
 * followed by a new line
 * return: Always 0
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
