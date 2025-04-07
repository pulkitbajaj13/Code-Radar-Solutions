// Your code here...
#include <stdio.h>
void trackScores(int arr[], int n, int result[]) {
    if (n == 0) {
        result[0] = 0;
        result[1] = 0;
        return;
    }
    int ctrh = 0, ctrl = 0;
    int h = arr[0], l = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < l) {
            l = arr[i];
            ctrl++;
        } else if (arr[i] > h) {
            h = arr[i];
            ctrh++;
        }
    }
    result[0] = ctrh;
    result[1] = ctrl;
}
