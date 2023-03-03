#include "main.h"
/**
 * string_toupper - function to convert string to uppercase
 * @str: string
 * Return: returns string converted
 */
char *string_toupper(char *str)
{
	int index = 0;

	while(str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
