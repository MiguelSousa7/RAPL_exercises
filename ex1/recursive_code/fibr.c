#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Recursive Fibonacci (VERY slow for large n)
long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    long long result = fibonacci(n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Fibonacci(%d) = %lld\n", n, result);
    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}