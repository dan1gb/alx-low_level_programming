#include <stdio.h>
/**
 * main - this is the main function
 * Return: returns a zero if the program is successful
*/
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
