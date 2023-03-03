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
	int ldest = 0, i = 0;

	while (dest[ldest] != '\0')
	{
		ldest++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[ldest + 1] = src[i];
	}

	/* Add null terminator to end of dest */
	dest[ldest +1] = '\0';
	return (dest);
}
