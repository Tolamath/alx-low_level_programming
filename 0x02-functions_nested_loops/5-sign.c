#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: is the name of the argument passed
 * Return: 0 Always
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
