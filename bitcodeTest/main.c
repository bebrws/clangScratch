#include <stdio.h>
#include <stdlib.h>

void return_input(void) {
    char array[30];
    gets (array);
    printf("%s\n", array);
}

int main(int argc, char *argv[]) {
    return_input();
    return 0; 
}

