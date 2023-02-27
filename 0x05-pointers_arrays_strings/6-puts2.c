#include "main.h"
/**
 * puts2 - function to print every other char
 * @str: pointer variable
 * return: always a 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
