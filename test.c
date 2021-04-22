#include "types.h"
//#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
    int status;
    int pid = fork();
    if (pid){   // parent
        //wait(&status);    // exit status will be 123
        waitpid(pid, &status, 0);
        printf(1, "parent process, child status is: %d\n", status);
    }else{      // child
        printf(1, "child process\n");
        exit(123);
    }
    exit(0);
}

