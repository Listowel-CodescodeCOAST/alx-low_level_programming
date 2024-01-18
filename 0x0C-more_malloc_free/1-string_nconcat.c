#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2.
 *
 * @s1: String one
 * @s2: String two
 * @n: Number of characters from s2 to concatenate
 *
 * Return: Pointer to the allocated memory containing the concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *s;
if (s1 == NULL)
s1 = "";
for (i = 0; s1[i] != '\0'; i++)
;
if (s2 == NULL)
s2 = "";
for (j = 0; s2[j] != '\0'; j++)
;
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < j; k++)
s[i + k] = s2[k];
s[i + j] = '\0';
return (s);
}
