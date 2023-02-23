#include "main.h"

/**
 * largest_number - function that checks the largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: returns largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
}
