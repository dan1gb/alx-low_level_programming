#include "main.h"
/**
 * print_line - function to print a line a set number of times
 * @n: parameter accepted
 * Return: always 0
 */
void print_line(int n)
{
int x;
if (n > 0)
{
for (x = 0; x < n; x++)
{
_putchar(95);
/*	x++;*/
}
_putchar('\n');
}
}
