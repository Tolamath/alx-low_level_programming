#include "main.h"
/**
 * print_last_digit - a function prints the last digit of a number
 * @i: is the number passed as an argument in the function
 * Return: 0 Always
 */
int print_last_digit(int i)
{
	int last;

	last = (i % 10);
	if (last < 0)
	{
		last = (last * (-1));
	}
	_putchar(last + '0');

	return (last);
}

