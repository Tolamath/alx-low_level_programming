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

/**
 * main - prints the factorial of a number
 *
 *
 * Return: 0 Always(success)
 */
/*int main(void)
{
	int m, n;

	n = -1024;
	m = factorial(n);
	printf("The factorial of %d  is: %d\n", n, m);
}
*/
