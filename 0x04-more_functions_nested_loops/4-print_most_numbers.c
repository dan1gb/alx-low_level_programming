#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - prints numbers except 2 & 4
 * @void - no return value
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
