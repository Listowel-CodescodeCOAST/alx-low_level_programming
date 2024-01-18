#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 *
 * @b: int input
 * Return: void
 */
void *malloc_checked(unsigned int b);
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exist(98);
	}
	return (ptr);
}
