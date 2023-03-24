#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to the standard output
 * @c - the character to be printed
 *
 * Return: on success 1
 * On error , -1 is returned , and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
