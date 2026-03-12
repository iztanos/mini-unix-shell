#include <string.h>
#include "parser.h"


void parse_command(char *line, char **argv) {
    char* token;
    int i = 0;

    token = strtok(line, " \t\n");

    while(token != NULL) {
        argv[i] = token;
        i++;

        token = strtok(NULL, " \t\n");
    }
    argv[i] = NULL;   
}