#include "main.h"
#include <unistd.h>
/**
 * print_most_numbers - prints numbers except two and four
 * Return: no return value
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
