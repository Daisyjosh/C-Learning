#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    const char *source = "Daisy";

    char *name = malloc(strlen(source)+1);

    if(name == NULL){
        return 1;
    }

    strcpy(name,source);
    printf("Name: %s\n",name);
    free(name);
    return 0;
}