#include <stddef.h>
/**
 * array_iterator - function to iterate function
 * @array: array to be iterated
 * @size: size of the array above
 * @action: pointer to function to call
 *
 * Return: nil
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if(array != NULL && size > 0 && action !- NULL)
for (i = 0; i < size; i++)
action(array[i]);
}
