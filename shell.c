#include "shell.h"
/**
 * main - entry point
 * 
 * Return: 0
 */
int shell(void)
{
	char *line;
	size_t len;
	int read;

	while (1)
	{
		write(1, "(mcpshell) ", 10);
		read = getline(&line, &len, stdin);
	
		if(read == EOF)
		{
			exit(0);
		}
		if(read == "exit")
		{
			exit(0);
		}
	}
	return (0);
}

