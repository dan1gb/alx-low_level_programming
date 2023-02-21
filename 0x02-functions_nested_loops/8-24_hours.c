#include "main.h"
/**
 * jack_bauer - function to print hours and minutes
 * void: returns void as a parameter
 * Return: No return included
 */
void jack_bauer(void)
{
	int hrs;
	int mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
		_putchar(':');
		_putchar(mins / 10 + '0');
		_putchar(mins % 10 + '0');
		_putchar('\n');
		}}}

