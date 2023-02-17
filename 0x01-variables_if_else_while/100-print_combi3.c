#include<stdio.h>
/**
 * main - this is the entry point
 * Return: returns 0 if success
 */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
if (num1 < num2 && num1 != num2)
{
putchar(num1 + '0');
putchar(num2 + '0');
if (num1 + num2 != 17)
{
putchar(',');
putchar(' ');
}}}}
putchar('\n');
return (0);
}
