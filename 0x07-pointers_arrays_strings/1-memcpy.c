#include "main.h"
/**
 * _memcpy - function
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for(i; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
