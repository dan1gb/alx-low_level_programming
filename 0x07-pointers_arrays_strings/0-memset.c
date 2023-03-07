#include "main.h"
/**
 * _memset - check main
 * @s: arg1
 * @b: arg2
 * @n: arg 3
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
