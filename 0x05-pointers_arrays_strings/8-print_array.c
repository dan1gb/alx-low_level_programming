#include "main.h"
/**
 * print_array - print array of numbers
 * @a: pointer argument
 * @n: integer argumen
 * return: always 0
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
