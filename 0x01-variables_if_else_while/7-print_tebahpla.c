#include<stdio.h>
/**
 * main - this is the main function
 * Return: this returns a 0 if success
 */
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
