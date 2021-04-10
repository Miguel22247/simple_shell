#include "shell.h"

int _printenv(void)
{
	char *line = environ[0];
	int i = 0;

	while (line)
	{
		write(1, line, strlen(i));
		write(1, "\n", 1);
		line = environ[++i];
	}
	return (0);
}

int _strcmp(char *s1, char *s2)
{
	while(*s1)
	{
	if (*s1 != *s2)
	{
		break;
	}
	s1++;
	s2++;
	}
	return( *s1 - *s2);
}

char *_strdup(char *str)
{
	char *dup;

	unsigned int len1;
	unsigned int len2;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len1 = 0; str[len1] != '\0'; len1++)
	{

	}

	len1++;

	dup = malloc(len1 * sizeof(char));

	if (dup != NULL)
	{
		for (len2 = 0; len2 < len1; len2++)
		{
			dup[len2] = str[len2];
		}
		return (dup);
	}
	else
	{
		return (NULL);
	}
	return (0);
}