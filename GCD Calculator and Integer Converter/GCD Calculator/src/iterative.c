#include "iterative.h"

int gcd_iterative(int m, int n) {
    if (n < 0) {
        n = -n;
    }
    if (m < 0) {
        m = -m;
    }

    while (n != 0) {
        int temp = n; 
        n = m % n;
        m = temp; 
    }

    return m;
}
