#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: return 0 always
 */
int main(void)
{
fizz_buzz(100);
return (0);
}
/**
 * * fizz_buzz - function to print fizz if divisible by 3,
 * buzz if divisible by 5 and fizzbuzz if %3 and % 5 ==0
 * @num1: variable parameter argument
 * Return: return 0 always
 */
int fizz_buzz(int num1)
{
for (num1 = 1; num1 <= 100; num1++)
{
if (num1 % 3 == 0)
{
printf("Fizz ");
}
if (num1 % 5 == 0)
{
printf("Buzz ");
}
if (num1 % 3 == 0 && num1 % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", num1);
}
}
printf("\n");
return (0);
}
