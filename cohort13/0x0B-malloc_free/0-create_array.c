#include "main.h"
#include <stdlib.h>
/**
* create_array - function to use malloc
* @size: size arg
* @c: character variable
* Return: always 0, but in this case ptArray
*/
char *create_array(unsigned int size, char c)
{
char *ptArray;
unsigned int count;

if (size == 0)
return (NULL);

else
{
ptArray = (char *) malloc(size * sizeof(char));

if (ptArray == 0)
return (0);

for (count = 0; count < size; count++)
{
ptArray[count] = c;
}
}
return (ptArray);
}
