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
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
