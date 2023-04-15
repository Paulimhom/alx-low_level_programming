#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */

/*
 * This function looks for a smaller word (needle)
 * inside a bigger word (haystack)
 * If the smaller word is found inside the bigger word,
 * it returns a pointer to the start of the smaller word
 * If the smaller word is not found inside the bigger word,
 * it returns a special value called NULL
*/

char *_strstr(char *haystack, char *nidle)
{
	char *h = haystack;
	char *n = nidle;

	while (*h)
	{
		n = nidle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
