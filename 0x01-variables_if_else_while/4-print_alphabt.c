#include <stdio.h>
/**
 *main - this is the main function
 *Return: return 0
 */
int main(void)
{
char alphabet[26] = "abcdefghijklmnoprstuvwxyz";
int i = 0;
for (i = 0; i < 26 ; i++)
{
putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
