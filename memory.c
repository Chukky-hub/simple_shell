#include "shell.h"

/**
 * bfree - This frees a pointer and it NULLs the address
 * @ptr: The address of the pointer to be freed
 *
 * Return: if freed return 1, otherwise return 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
