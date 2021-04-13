#include"shell.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *ptr, *ret;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len1 = 0, ptr = s1; *ptr; ptr++)
		len1++;
	for (len2 = 0, ptr = s2; *ptr; ptr++)
		len2++;
	if (n > len2)
		n = len2;

	ret = malloc((len1 + n + 1) * sizeof(char));
	if (!ret)
		return (0);

	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	i = 0;
	while (i < n)
	{
		*ptr++ = s2[i++];
	}
	*ptr = 0;

	return (ret);
}

/**
 * _puts - outputs a line of stream
 * @str: inherited from main
 * Return: 0
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{_putchar(str[i]);
}
_putchar('\n');
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strdup - duplicates a string into newly allocated array
 *
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr, *ret;

	if (!str)
		return (NULL);

	ptr = str;
	while (*ptr++)
		size++;

	ret = malloc(size + 1);
	if (!ret)
		return (NULL);

	ptr = ret;
	while (*str)
		*ptr++ = *str++;

	*ptr = 0;
	ret[size] = '\0';
	return (ret);
}

/**
 * _strcmp - a function that compares two strings
 * @s1: input one
 * @s2: input two
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}