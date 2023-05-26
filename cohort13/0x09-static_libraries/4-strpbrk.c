#include "main.h"
/**
 * _strpbrk - function to strip bark
 * @s: argument 1
 * @accept: argument 2
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	for (; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0';  j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
