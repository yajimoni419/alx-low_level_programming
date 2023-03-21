#include "main.h"

/**
 * print_last_digit - prints the last digit of any given number
 * @i:  integer to be printed
 *
 * Return: the value of integer k always
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 10)
		k = -k;
	_putchar(k + '0');

	return (k);
}
