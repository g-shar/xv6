#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
    set_prior(3);
    printf(1, "Process 2\n");
    int i, k;
    for (i = 0; i < 43; i++){
        asm("nop");
        for (k = 0; k < 43; k++){
            asm("nop");
        }
    }
    exit();
}
