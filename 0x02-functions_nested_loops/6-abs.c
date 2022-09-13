#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @i: refers to the type of the argument passed in the function
 * Return: 0 Always
 */
int _abs(int i)
{
	if (i < 0)
	{
		int x;

		x = (i * (-1));

		return (x);
	}
	else
	{
		return (i);
	}
}
