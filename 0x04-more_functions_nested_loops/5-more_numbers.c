#include "main.h"
/**
 * more_numbers - function to print numbers
 * @void: no return value
 * Return: no return
 */

void more_numbers(void)
{
int count, num;

for (count = 1; count <= 10; count++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
