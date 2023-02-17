#include<stdio.h>
/**
 * main - this is the entry point
 * Return: returns 0 if success
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
