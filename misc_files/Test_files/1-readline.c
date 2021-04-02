#include "shell.h"

/**
* read_line - calls getline until EOF 
* Return: 0 on success, 1 if failed
*/

void read_line()
{
    int char_read, len;
    char *buffer;
    /*char *line= NULL; */

    /*free buffer?*/
    
    char_read = getline(buffer, BUFSIZE);
    if (char_read == -1) /* EOF */
        break;
    else
        
}
