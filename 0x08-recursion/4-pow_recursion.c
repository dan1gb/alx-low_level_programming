#include "main.h"
/**
* _pow_recursion - function to find powers of an integer
* @x: base number
* @y: power
* Return: factorial
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
