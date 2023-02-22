#include <stdio.h>
#include "main.h"
/**
 * times_table - function to calculate multiples
 * @void: returns void
 * Return: return 0 if successful
 */
void times_table(void)
{
int row, col;

for (row = 0; row < 10; row++)
{
for (col = 0; col < 10; col++)
{
if (col != 9)
{
printf("%2d, ", row * col);
}
else
{
printf("%2d", row * col);
}
}
printf("\n");
}
}
