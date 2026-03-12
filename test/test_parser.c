#include <stdio.h>
#include "../parser.h"

void test_parser() {

    char input[] = "hello my name is tanos";

    char *my_argv[64]; 

    printf("Testing parser with input: \"%s\"\n", input);

    parse_command(input, my_argv);

    for (int i = 0; my_argv[i] != NULL; i++) {
        printf("arg[%d]: %s\n", i, my_argv[i]);
    }
}

int main() {
    test_parser();
    return 0;
}
