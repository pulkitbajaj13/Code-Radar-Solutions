#include <stdio.h>
int main() {
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=(a-i);j++) {
            printf(" ");
        }
        for (j=1;j<=(2*i-1);j++) {
            printf("*");  
    }
        printf("/n");
    }
    for(i=a-1;i>=1;i--){
        for(j=1;j<=(a- i);j++) {
            printf(" "); 
        }
        for(j=1;j<=(2*i-1);j++) {
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
    }
