#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @i: is the value passed as an argument in the function
 * Return: 0 Always
 */
int print_last_digit(int i)
{
	int last;

	last = (i % 10);
	if (i > 0)
	{
		_putchar(last_digit + '0');
		return (last);
	}
	else if (i < 0)
	{
		last = last * (-1);
		_putchar(last_digit + '0');
		return (last);
	}
	else
	{
		_putchar(last_digit + '0');
		return (last);
	}
}
