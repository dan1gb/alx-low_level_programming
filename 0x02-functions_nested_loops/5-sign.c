#include "main.h"
/**
 * print_sign - function to print the sign of a number
 * Return: returns 1 if greater than 0,0 if zero, -1 if less than zero
 * @n - argument accepted by function
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
if (n > 0)
		{
_putchar('+');
return (1);
}
else
_putchar('0');
return (0);
}
