#include <stdio.h>
/**
 * main - print all the lowercase letters except q and e
 * Initialize variables
 * Use the for loop
 * Within the for loop, use the if condition
 * Print the function
 * Return: Always 0 (Success);
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'q' && low != 'e')
		{
			putchar(low);
		}
	}
	putchar('\n');

	return (0);
}
