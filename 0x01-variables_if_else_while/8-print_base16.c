#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Declare variables
 * Use the for loop twice(first for numbers, then for alphabet)
 * Return:0 Always(Success)
 */
int main(void)
{
	char low;

	for (low = '0'; low <= '9'; low++)
	{
		putchar(low);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
