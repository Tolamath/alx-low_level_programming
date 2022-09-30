#include "main.h"
#include <stdio.h>
/**
 * factorial - prints the factorail of a function
 * @n: The parameter passed to the factorial function
 *
 * Return: 0 Always(success)
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

