#include "main.h"

/**
 * largest_number - returns to the largest number
 * @a: first integer
 * @b: second number
 * @c: third number
 * Return: laster number
 */

int largest_number(int a, int b, int c)

{

	int largest;

	if (a > b && b > c)
	{
	largest = a;
	}
	else if (a > c && c > b)
	largest = a;
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (b > c && c > a)
		largest = b;
	else if (c > a && a > b)
		largest = c;
	else if (c > b && b > a)
	{
	largest = c;
	}
	return (largest);
	}
