#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    while(1) {
        printf("myshell> ");

        read = getline(&line, &len, stdin);
        
        if(strcmp(line, "quit\n") == 0) {
            break;
        }

        if(read == -1) {
            break;
        } 
    }  
    free(line);
    return 0;
}