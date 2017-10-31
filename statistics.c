#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"
#include <sys/stat.h>
#include <unistd.h>

int main(){
    struct stat buffer;
    stat("makefile", &buffer); 
    
    printf("makefile was last modified %s\n", ctime(&(buffer.st_mtime)));
}
