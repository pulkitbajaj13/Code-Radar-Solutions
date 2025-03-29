#include <stdio.h>
#include <limits.h>

int main() {
    int N, i, max, secondlargest;
    
    // Input size of array
    scanf("%d", &N);

    // Check if array size is less than 2
    if (N < 2) {
        printf("-1");
        return 0;
    }

    int arr[N];

    // Input array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and secondlargest
    max = secondlargest = INT_MIN;

    // Find the largest and second largest in a single pass
    for (i = 0; i < N; i++) {
        if (arr[i] > max) {
            secondlargest = max;
            max = arr[i];
        } else if (arr[i] > secondlargest && arr[i] < max) {
            secondlargest = arr[i];
        }
    }

    // Handle case where no valid second largest exists
    if (secondlargest == INT_MIN || secondlargest == max) {
        printf("-1");
    } else {
        printf("%d", secondlargest);
    }

    return 0;
}
