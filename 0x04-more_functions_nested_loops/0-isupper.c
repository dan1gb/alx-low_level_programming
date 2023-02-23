#include "main.h"
/**
 * _isupper - function to check if letter is uppercase
 * @x: To be checked
 * Return: 1 for upper letter, 0 otherwise
 */

int _isupper(int c)
{
c = 0;
if (c >= 65 && c <= 90)
{
	return (1);
}
return (0);
}
