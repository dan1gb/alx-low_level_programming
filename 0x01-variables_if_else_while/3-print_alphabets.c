#include <stdio.h>
#include <ctype.h>
/**
 *main - this is the main function
 *Return: return 0
 */
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
for (i = 0; i < 26 ; i++)
{
putchar(alphabet[i]);
}
for (i = 0; i < 26; i++)
{
putchar(toupper(alphabet[i]));
}
putchar('\n');
return (0);
}
