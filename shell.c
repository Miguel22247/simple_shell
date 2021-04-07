#include "shell.h"
/**
 * main - entry point
 * 
 * Return: 0
 */
int main(void)
{
	char *line;
	size_t len;
	char *command;

	while (1)
	{
		write(1, "(mcpshell) ", 10);
		getline(&line, &len, stdin);
	
		if(command == 'exit')
		{
			/* write(1, '\n', 1);
			return (0); */
			break;
		}
	}
	return (0);
}

