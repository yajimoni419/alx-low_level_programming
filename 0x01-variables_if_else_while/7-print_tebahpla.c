#include <stdio.h>

/**
 * main - the heart of my code
 *
 * Return: always (0) success
 */

int main(void)

{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
