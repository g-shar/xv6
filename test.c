#include "types.h"
//#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
    printf(1, "Hello world\n");

    int status = 100;
    int result = wait(&status);
    printf("result  = ", result);

    exit(0);
}

