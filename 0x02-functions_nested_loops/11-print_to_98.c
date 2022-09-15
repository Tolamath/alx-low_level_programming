#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: is the argument passed to the function
 *
 * Return: 0 Always(success)
 */
void print_to_98(int n)
{
	int i = n, rem, div;

	printf("%d", i);
	for (i = n + 1; i <= 98; i++)
	{
		putchar(',');
		putchar(' ');

		div = (i / 10);
		rem = (i % 10);
		if (i > 9)
		{
			putchar(div + '0');
			putchar(rem + '0');
		}
		else if (i < 0)
		{
			printf("%d", i);
		}
		else
		{
			putchar(i + '0');
		}
	}
	while (n > 98)
	{
		putchar(',');
		putchar(' ');
		int m;
	       	m = n-1;
		printf("%d", m);
		n--;
	}
	putchar('\n');
}
