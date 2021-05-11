#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
    set_prior(5);
    printf(1, "Process 3\n");
    int i, k;
    for (i = 0; i < 1000; i++){
        asm("nop");
        for (k = 0; k < 1000; k++){
            asm("nop");
        }
    }
    exit();
}
