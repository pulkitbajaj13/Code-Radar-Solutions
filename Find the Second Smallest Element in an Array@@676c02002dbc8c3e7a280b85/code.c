// Your code here...
#include <stdio.h>
#include <limits.h>
int main() {
    int N, i, min, secondsmallest;
    scanf("%d", &N);
    if (N < 2) {
        printf("-1");
        return 0;
    }
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    min = secondsmallest = INT_MAX;
    for (i = 0; i < N; i++) {
        if (arr[i] < min) {
            secondsmallest = min;
            min = arr[i];
        } else if (arr[i] < secondsmallest && arr[i] > min) {
            secondsmallest = arr[i];
        }
    }
    if (secondsmallest == INT_MAX || secondsmallest == min) {
        printf("-1");
    } else {
        printf("%d", secondsmallest);
    }
    return 0;
}