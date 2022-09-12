#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * Declare variable
 * Use the for loop
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = '0'; num < '10'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
