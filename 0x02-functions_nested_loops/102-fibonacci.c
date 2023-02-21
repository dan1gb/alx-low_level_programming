#include<stdio.h>
/**
 * main - entry point
 * @void: parameter accepted
 * return: returns 0 if success
 */
int main(void)
{
	int count;
	unsigned long int fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
	else
			printf(", "); 
	}
	return (0);
}
