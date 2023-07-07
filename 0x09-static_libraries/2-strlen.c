#include "main.h"
/**
 * _strlen - function to count length of string
 * @s: pointer as parameter
 * Return: returns length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
