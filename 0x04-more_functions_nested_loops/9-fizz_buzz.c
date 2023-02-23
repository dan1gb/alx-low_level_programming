#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 always
 */
int main(void)
{
	int num1;
for (num1 = 1; num1 <= 100; num1++)
{
if ((num1 % 3 == 0) && (num1 % 5 == 0))
printf("FizzBuzz");
else if (num1 % 3 == 0)
printf("Fizz");
else if (num1 % 5 == 0)
printf("Buzz");
else
printf("%d ", num1);
if (num1 != 100)
printf(" ");
}
printf("\n");
return (0);
}
