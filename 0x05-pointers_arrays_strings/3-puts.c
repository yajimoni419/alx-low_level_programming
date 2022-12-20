#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */
void _puts(char *str) /* _putchar is to be used */
{
	while (*str != '\0')
	{
	_putchar('\n');
	}
	_putchar(*str++);
}
