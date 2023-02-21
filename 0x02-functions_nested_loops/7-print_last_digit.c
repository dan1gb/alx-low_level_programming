#include "main.h"
/**
 * print_last_digit - function to print the last digit of a number
 * @num: number parameter in function
 * Return: returns the last digit
 */
int print_last_digit(int num)
{
	int last;
last = num % 10;
if (num < 0)
{
	last = last * -1;
}
_putchar(last + '0');
return (last);
}
