#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "statistics.h"
#include <sys/stat.h>
#include <unistd.h>

int main(){
    struct stat buffer;
    stat("makefile", &buffer); 
    
    printf("makefile was last modified %s", ctime(&(buffer.st_mtime)));
    printf("makefile is %ld bytes big\n", buffer.st_size);
    printf("makefile's permissions, currently still a number lol: %d\n", buffer.st_mode);
}
