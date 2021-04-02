#include "shell.h"

/*
* main - function that loops prompt
*
*/

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	int int_mode;

	while (int_mode)
	{
		int_mode = isatty(STDIN_FILENO);
		if (int_mode == 1)
			write(STDOUT_FILENO, PROMPT, 13);
	}
	
/* The code continues below */
}