#include "main.h"
/**
 * _strchr - function
 * @s: arg1
 * @c: arg2
 * Return: null value
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while(s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return ('\0');
}
