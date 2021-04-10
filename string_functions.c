#include "shell.h"
/**
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	for (len = 0; *s != 0; s++, len++)
	{
	}
	return (len);
}

/**
 * _strdup - String dup.
 * @str: string
 * Return: a pointer to a newly alloc space in memory, containing a copy of str
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (_strlen(str) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < (_strlen(str) + 1) ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}