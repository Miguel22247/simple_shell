#include "shell.h"
/**
 * print_enviroment - prints the enviroment variable
 * 
 * 
 */
int print_enviroment(void)
{
	char *line = environ[0];
	int n = 0;

	while (line)
	{
		write(1, line, strlen(line));
		write(1, "\n", 1);
		line = environ[++n];
	}
	return (0);
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
	return (ret);
}

char *path_finder(char *command)
{
	char *path = _strdup(getenv("PATH"));
	int l, m ;
	char *path_tkn = strtok(path, ":");
	char *path_array[100];
	char *string2 = command;
	char *new_path;
	struct stat buffer;

	new_path = malloc(sizeof(char) * 100);
	if (getenv("PATH")[0] == ":")
		if (stat(command, &buffer) == 0)
			return (strdup(command));
	while (path_tkn != NULL)
	{
		path_array[l++] = path_tkn;
		path_tkn = strtok(NULL, ":");
	}
	path_array[l] = NULL;
	for (m = 0; path_array[m]; m++)
	{
		strcpy(new_path, path_array[m]);
		strcat(new_path, "/");
		strcat(new_path, string2);
		strcat(new_path, "\0");

		if (stat(new_path, &buffer) == 0)
		{
			free(path);
			return (new_path);
		}
		else
			new_path[0] = 0;
	}
	free(path);
	free(new_path);

	if(stat(command, &buffer) == 0)
		return (_strdup(command));
	return (NULL);
}