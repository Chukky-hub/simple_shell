#include "shell.h"

/**
 * _strlen - This returns the length of a string
 * @s: It is the string whose len is to be checked
 *
 * Return: The integer len of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - this performs a lexicogarphic comparison of two string.
 * @s1: This is the first strings
 * @s2: This is the second strings
 *
 * Return: It returns neg if s1 < s2, pos if s1 > s2, and zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - This checks if the needle starts with haystack
 * @haystack: This is the string to search
 * @needle: This is the substring to find
 *
 * Return: It retuns address of next character of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - This concatenates two strings
 * @dest: This is the destination buffer
 * @src: This is the source buffer
 *
 * Return: It returns pointer to the destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
