#include "recursive.h"

int gcd_recursive(int m, int n) {
    if (m < 0) {
        return gcd_recursive(-m, n);
    } else if (n < 0) {
        return gcd_recursive(m, -n);
    } else if (n == 0) {
        return m;
    } else {
        return gcd_recursive(n, m % n);
    }
}
