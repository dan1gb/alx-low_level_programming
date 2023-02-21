#include<stdio.h>
/**
 * main - entry point
 * @void: parameter accepted
 * return: returns 0 if success
 */
int main(void)
{
	int n, f1 = 0, f2 = 1, i;

	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", f2);
		int next = f1 + f2;
f1 = f2;
f2 = next;
	}
	printf("\n");
	if (n < 1)
		return (0);
}
