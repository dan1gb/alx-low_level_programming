#include "main.h"
/**
 * print_rev - function name
 * @s: pointer parameter
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;
	

	while (s[i] != '\0')
		i++;
/*	while (i--)*/
	for (i=i-1;i>=0;i--)
 {
		_putchar(s[i]);
	}
	_putchar('\n');
}
