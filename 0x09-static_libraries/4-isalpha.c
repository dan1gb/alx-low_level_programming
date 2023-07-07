#include "main.h"
/**
 * _isalpha - function to check alphabet
 * Return: returns 0 if alphabet, else 0
 * @c: argument accepted to be worked upon
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
