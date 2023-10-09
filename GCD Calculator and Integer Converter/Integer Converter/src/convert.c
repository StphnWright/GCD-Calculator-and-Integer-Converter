#include <stdio.h>
#include <stdlib.h>

void print_formats(int n) {
    printf("signed decimal   : %d\n", n);
    printf("unsigned decimal : %u\n", (unsigned int) n); 
    printf("hexadecimal      : %x\n", n);
    printf("binary           : ");

    for (int i = 0; i < 32; i++) {
        if (i % 4 == 0 && i > 0) {
            putc(' ', stdout);
        }
        putc(n < 0 ? '1' : '0', stdout);
        n <<= 1;
    }
    printf("\n");
}

int main(int argc, char **argv) {
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    printf("\n");
    print_formats(n);
    return EXIT_SUCCESS;
}
