#include "main.h"

/**
 * *_memset - constant memory byte
 * @s: memory to be filled
 * @b: char to copy
 * @ number of times to copy b
 *
 * Return: point to s memory
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0, i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
