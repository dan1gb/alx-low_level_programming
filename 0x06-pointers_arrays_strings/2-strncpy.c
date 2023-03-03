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
int lsrc = 0;
while (src[i++])
{
	lsrc++;
}
for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (i = lsrc; i < n; i++)
	{
	dest[i] = '\0';
}
return (dest);
}
