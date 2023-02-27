#include "main.h"
/**
 * _puts - function itselfu
 * @str: pointer as argument
 * Return: none
 */
void _puts(char *str)
{
/*	int i;*/

	while ((*str) != '\0')
	{
		_putchar(*str++);
/* (*str++); */
	}
_putchar('\n');
	}
