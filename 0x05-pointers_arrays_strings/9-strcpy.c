#include "main.h"
/**
 * *_strcpy - function to copy src to dest
 * @dest: parameter 1
 * @src: source
 * Return: returns the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
	{
		return (NULL);
	}
	else
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
