#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to print numbers to 98
 * @n: argument accepted
 * Return: return void since it's a void function
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
if (n == 98)
{
	printf("98\n");
}
/*printf("\n");*/
}
