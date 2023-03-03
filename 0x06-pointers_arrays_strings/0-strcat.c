#include "main.h"
/**
 * _strcat - function to concatenate strings
 * @dest: function parameter 1
 * @src: function paramterer 2
 * Return: dest as value
 */
char *_strcat(char *dest, char *src)
{
int ldest, lsrc, index;

for (index = 0; dest[index] != '\0'; index++)
	ldest++;
for (index = 0; lsrc[index] != '\0'; index++)
	lsrc++;
for (index = 0; index <= lsrc; i++)
	dest[ldest + index] = src[index];
return (dest);
}
