#ifndef HEADER_H_
#define HEADER_H_

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
int commandread(char *buffer, size_t __attribute__((unused))read);
void not_found(char *command);
int print_enviroment(void);
char path_finder(char *command);
int calling(char *commandarray[]);

/*string handler functions*/
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);

#endif
