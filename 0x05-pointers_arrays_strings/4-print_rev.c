#include "main.h"
#include <stdio.h>
#include "_putchar.c"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * _putchar - print the character for substitute
 * Return: void
*/

void print_rev(char *s)
{
int i = 0;
while (s[i])
	i++;

while (i--)
{
	_putchar(s[i]);
}
	_putchar('\n');

}
