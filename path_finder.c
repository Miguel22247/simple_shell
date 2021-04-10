#include "shell.h"

char *path_finder(char *command)
{
	char *path = _strdup(getenv("PATH"));
	int l = 0, m = 0;
	char *path_tkn = strtok(path, ":");
	char *path_array[100];
	char *string2 = command;
	char *new_path = NULL;
	struct stat buffer;

	new_path = malloc(sizeof(char) * 100);
	if (getenv("PATH")[0] == ':')
		if (stat(command, &buffer) == 0)
			return (strdup(command));
	while (path_tkn != NULL)
	{
		path_array[i++] = path_tkn;
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

	if (stat(command, &buffer) == 0)
		return (_strdup(command));
	return (NULL);
}