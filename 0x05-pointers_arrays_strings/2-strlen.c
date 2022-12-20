#include "main.h"

/**
 * _strlen - returns the size of a string]
 * @s: string
 * Return: length
 */
int *strlen(char *s);
{
	int len = 0;


	while (*s != '\o')
	{
		len++;
		s++;
	}
	return (len);
}
