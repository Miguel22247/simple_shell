#include "shell.h"
/**
*
*
*
*/
void start_prompt(void)
{
	int start = 1;
	const char *CLEAR_SCREEN;

		if (start)
		{
			CLEAR_SCREEN = " \e[1;1H\e[2J";
			write(STDOUT_FILENO, CLEAR_SCREEN, 13);
			start = 0;
		}

}