#include <stdio.h>

/**
 * main - entry point for this particular code
 *
 * Return: always 0 (success)
 */

int main(void)

{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);

}