#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <integer m> <integer n>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int m = atoi(argv[1]);
    int n = atoi(argv[2]); 

    if (m == 0 && n == 0) {
        printf("gcd(0, 0) = undefined\n");
    } else {
        printf("Iterative: gcd(%d, %d) = %d\n", m, n, gcd_iterative(m, n));
        printf("Recursive: gcd(%d, %d) = %d\n", m, n, gcd_recursive(m, n));
    }

    return EXIT_SUCCESS;
}
