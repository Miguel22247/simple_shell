#ifndef SHELL_H_
#define SHELL_H_

/* libraries */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


/* external variables */
extern char **environ;

/* main functions */
int main(int argc, char *argv[]);
int commandread (char *line, size_t __attribute__((unused))read);

/*string functions*/
char *_strdup(char *str);
int _strlen(char *s);

#endif