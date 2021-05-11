#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
    set_prior(3);
    int i, k;
    for (i = 0; i < 60000; i++){
        asm("nop");
        for (k = 0; k < 60000; k++){
            asm("nop");
        }
    }
    exit();
}
