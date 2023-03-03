#include "main.h"
/**
 * _strcmp - function to compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: return difference
 */
int _strcmp(char *s1, char *s2)
{
	char diff = *s1 - *s2;
while ((*s1 && s2) && (*s1 == *s2))
{
	s1++;
	s2++;
}
return (diff);
}
