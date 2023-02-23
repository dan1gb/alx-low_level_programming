#include "main.h"
/**
 * print_number - function to print numbers with their signs
 * @n: parameter accepted
 * Return: no return value
 */
void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		number = -n;
		_putchar('-');
	}
	else
	{
		number = n;
	}

	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
