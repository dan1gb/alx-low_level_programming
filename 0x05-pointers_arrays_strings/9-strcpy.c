#include "main.h"
/**
 * *_strcopy - function to copy src to dest
 * @*dest: parameter 1
 * @*src: source
 * return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for(i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
