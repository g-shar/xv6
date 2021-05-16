#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
    set_prior(10);
    int i, k;
    for (i = 0; i < 40000; i++){
        asm("nop");
        for (k = 0; k < 40000; k++){
            asm("nop");
        }
    }
    exit();
}

