#include "main.h"
int print_last_digit(int num)
{
	int last;
last = num % 10;
if (num < 0)
{
	last = last * -1;
}
_putchar(last + '0');
return (last);
}
