#include "shell.h"

/**
 * _memset - This fills memory with constant byte
 * @s: It is the pointer to mem area
 * @b: It is the byte to fill *s with
 * @n: This is amount of bytes to be filled
 * Return: (s) a pointer to mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - This reallocates block of memory
 * @ptr: The pointer to the previous mallocated block
 * @old_size: The byte size of the Previous block
 * @new_size: The byte size of the New block
 *
 * Return: the pointer to the old block name.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
