#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    for (i=31;i>=0;i--)
        if (n&1<<i)
            printf("1");
        else if(i<31)
            printf("0");
    return 0;
}