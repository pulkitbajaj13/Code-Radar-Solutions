#include <stdio.h>

int main() {
    int i,a,j;
    scanf("%d",&a);
    for(i=a;i>=a;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");

    }

    return 0;
}