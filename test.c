#include "types.h"
//#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
    printf(1, "Hello world\n");

    int status = 2;
    wait(&status);
    printf(1, "status %d", status);

    exit(0);
}

