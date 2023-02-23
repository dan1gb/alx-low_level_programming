#include "main.h"
/**
 * print_diagonal - function to print diagonals
 * @n: parameter accepted
 * Return: no return value
 */
void print_diagonal(int n)
{
	int num, gap;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
for (gap = 0; gap < num; gap++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
