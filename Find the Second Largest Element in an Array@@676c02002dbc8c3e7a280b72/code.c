#include <stdio.h>
#include <limits.h>
int main() {
    int N, i, max, secondlargest;
    scanf("%d", &N);
    if (N < 2) {
        printf("-1");
        return 0;
    }
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    max = secondlargest = INT_MIN;
    for (i = 0; i < N; i++) {
        if (arr[i] > max) {
            secondlargest = max;
            max = arr[i];
        } else if (arr[i] > secondlargest && arr[i] < max) {
            secondlargest = arr[i];
        }
    }
    if (secondlargest == INT_MIN || secondlargest == max) {
        printf("-1");
    } else {
        printf("%d", secondlargest);
    }
    return 0;
}
