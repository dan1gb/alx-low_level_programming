#include "main.h"
/**
 * swap_int - swaps integers
 * @a: pointer1
 * @b: pointer 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
