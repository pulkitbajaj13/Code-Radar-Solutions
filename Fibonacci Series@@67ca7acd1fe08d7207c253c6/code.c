#include <stdio.h>

// Function to return the nth Fibonacci number
int fibonacciSeries(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

int main() {
    int n;

    // Read the number of terms
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Print Fibonacci series up to 'n' terms
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciSeries(i));
    }
    
    return 0;
}
