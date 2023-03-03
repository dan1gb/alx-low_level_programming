#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: returns destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
