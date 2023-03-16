#include "main.h"
/**
* malloc_checked - function to check if null
* @b: argument
* Return: always 0
*/
void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (0);
}
