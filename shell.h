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
#define PATH_MAX 4096
#define BUFSIZE 1024

/*functions*/

/*main function*/
int main(void);
/*for exit the hash*/
int exit_hash(ssize_t endof, char *argv)

#endif
