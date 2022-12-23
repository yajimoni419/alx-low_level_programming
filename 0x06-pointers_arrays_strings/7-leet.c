#include "main.h"
#include <stdio.h>

/**
 * leek - encode into 1337speak
 * @n: input value
 * Return: n
 */
char *leet(char *);
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433770011";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (i = 0; j < 10; j++)
		{
			if (n[i] == s[j])
			{
				n[i] = s[j];

			}

		}

	}
	return (n);

}


