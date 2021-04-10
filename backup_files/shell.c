#include "shell.h"

char *name;

int main(int argc, char *argv[])
{
	char *line = NULL;
	size_t len= 0;
	ssize_t read = 0;

	(void) argc;
	name = argv[0];

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(1, "$ ", 2);
		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(1, "\n", 1);
			break;
		}

		if (line[read - 1] == '\n')
			line[read - 1] = '\0';
		if (*line == '\0')
			continue;
		if (cmdread(line, read) == 2)
			break;
	}
	free (line);
	line = NULL;
	return (0);
}

int cmdread(char *line, size_t __attribute__((unused))file_strm)
{
	char *tkn = NULL;
	char *cmdarray[100];
	int n;

	if (_strcmp(line, "exit") == 0)
		return (2);
	if (_strcmp(line, "env") == 0)
		return (_printenv());
	tkn = strtok(line, " "), n = 0;
	while (tkn)
	{
		cmdarray[n++] = tkn;
		tkn = strtok(NULL, " ");
	}
	cmdarray[i] = NULL;
	return (calling(commandarray));

}

void notfound(char *command)
{
	write(2, name, strlen(name));
	write(2, ": 1: ", 5);
	write(2, command, strlen(command));
	write(2, ": not found\n", 12);
}

int call (char *commandarray[])
{
	char *executable_path_string = NULL;
	char *command = NULL;
	pid_t child;
	int status;

	command = commandarray[0];
	executable_path_string = path_finder(command);
	if (executable_path_string == NULL)
	{
		notfound(command);
		return (3);
	}
	child = fork();
	if (child < 0)
	{
		perror("Error:");
		return (-1);
	}
	if (child > 0)
		wait(&status);
	else if (child == 0)
	{
		execve(executable_path_string, commandarray, environ);
		perror("Error:");
		exit(1);
	}
	free(executable_path_string);
	return (0);
}