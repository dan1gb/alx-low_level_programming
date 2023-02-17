#include <stdio.h>
/**
 *main - this is the main function
 *Return: return 0
 */
int main(void)
{
int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int i;
for (i = 0; i < 10; i++)
putchar((numbers[i] + 48));
putchar('\n');
return (0);
}
