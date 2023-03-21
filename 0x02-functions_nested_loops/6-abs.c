#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the int in question
 *
 * Return: the abs of the int.
 */

int _abs(int n)

{
	if (n < 0)
		n = -(n);
		else if (n >= 0)
		n = n;
		return (n);
}
