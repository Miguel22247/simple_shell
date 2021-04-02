#ifndef SHELL_H
#define SHELL_H

/* Libraries */
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <linux/limits.h>

/* Constants */
#define PROMPT "$ "
#define PATH_MAX 4096
#define BUFSIZE 1024

/*functions*/

/*main function*/
int main(int argc, char *argv[]);

/* auxiliar functions */
int _strlen(char *s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/*for print*/
int _putchar(char c);


#endif
