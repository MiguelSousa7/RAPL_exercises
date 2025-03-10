#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Iterative Fibonacci function
long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    
    long long result = fibonacci(n);

    printf("Fibonacci(%d) = %lld\n", n, result);


    return 0;
}