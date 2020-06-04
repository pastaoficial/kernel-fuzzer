#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>

#include "common.h"

int main(int argc, char **argv) {
    uint64_t n, *p;
    
    if (argc > 1 ) {
        n = atoi(argv[1]);
        p = &n;
        printf("0x%x\n", hsiphash_static(p, sizeof(unsigned long)));
    }
    
    return 0;
}
