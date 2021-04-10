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
extern char **enviroment;

/* main function */
int main(int argc, char *argv[]);

#endif