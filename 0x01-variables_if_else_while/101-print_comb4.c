#include<stdio.h>
/**
 * main - this is the entry point
 * Return: returns 0 if success
 */
int main(void)
{
int i,j,k;
for (i = 0; i < 10; i++)
{
for (j = 1; j < 10; j++)
{
for (k=2; k < 10; k++)
{
if (i < j && j < k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i + j +k != 24){
putchar(',');
putchar(' ');
}}}}}
putchar('\n');
return (0);
}
