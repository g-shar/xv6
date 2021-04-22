#include "types.h"
//#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
    printf(1, "Hello world\n");
    int status;
    int pid = fork();
    if (pid){   // parent
        wait(&status);    // exit status will be 123
        printf(1, "status %d\n", status);
    }else{      // child
        printf(1, "child process\n");
        exit(123);
    }

    // int waitpid(int pid, int* status, int options)
    // exit(0);
    return 0;
}

