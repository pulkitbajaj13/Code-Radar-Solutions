#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=a;i>=1;--i){
       for(j=a;j<=1;++j) {
        printf("* ");
       }
       printf("\n");
    }
    return 0;
}