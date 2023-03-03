#include "main.h"
/**
 * _strncat - function to concatenate strings
 * @dest: destination character
 * @src: source character
 * @n: number of array fields
 * Return: returns destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int ldest = 0, lsrc = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
		ldest++;
	for (i = 0; src[i] != '\0'; i++)
		lsrc++;
	for (i = 0; i < n; i++)
		dest[ldest + 1] = src[i];
	return (dest);
}
