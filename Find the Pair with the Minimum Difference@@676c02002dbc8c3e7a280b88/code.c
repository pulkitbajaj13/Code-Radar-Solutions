// Your code here...
#include <stdio.h>
#include <limits.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int N, i, mindiff, first, second;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, N);
    mindiff = INT_MAX;
    for (i = 0; i < N - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < mindiff) {
            mindiff = diff;
            first = arr[i];
            second = arr[i + 1];
        }
    }
    printf("%d %d\n", first, second);
    return 0;
}
