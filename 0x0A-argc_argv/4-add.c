#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - function to enter
* @argc: argument count
* @argv: argument vector
* Return: always 0
*/
int main(int argc, char *argv[])
{
int sum = 0, i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}}
int num = atoi(argv[i]);
if (num > 0)
{
sum = sum + num;
}
}
printf("%d\n", sum);
return (0);
}
