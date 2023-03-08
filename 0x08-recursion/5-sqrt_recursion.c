#include "main.h"
/**
* find_sqrt - find sqrt recursively
* @num: number to be workd on
* @root: root number
* Return: Always 0
*/
int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);
if (root == num / 2)
return (-1);
return (find_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - finds sqrt recursively
* @n: number to be worked on
* Return: always 0
*/
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
