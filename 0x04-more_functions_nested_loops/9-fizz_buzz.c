#include <stdio.h>
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
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
		if (i == 100)
		{
			continue;
		}
	}
	putchar('\n');

	return (0);
}
