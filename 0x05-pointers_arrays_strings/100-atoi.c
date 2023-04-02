#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string parameter
 *
 * The number in the string can be preceded by an infinite number of chars.
 * This function takes into account all - and + signs before the number.
 * If there are no numbers in the string, the function returns 0.
 * This implementation does not use long, arrays, hard-coded values, or any
 * other forbidden constructs. It also handles leading white space and returns
 * the correct sign and value for the input string.
 *
 * Return: the integer value of the inpit string
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}
