#include "main.h"
/**
 * _isupper - print 1 if letter is in uppercase
 *
 * @c: character to be printed
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
