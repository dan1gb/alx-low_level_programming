#include "main.h"
/**
 * print_square - function to print a square
 * @size: parameter accepted
 * Return: no return value as it's void
 */
void print_square(int size)
{
int row, col;

if (size > 0)
{
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
	_putchar(35);
}
_putchar('\n');
}}
else if (size <= 0)
_putchar('\n');
}
