#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if ((i % 15) == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	putchar('\n');
}
