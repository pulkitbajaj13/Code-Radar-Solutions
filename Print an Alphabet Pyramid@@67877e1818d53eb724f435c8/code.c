// Your code here...
#include <stdio.h>
int main(){
    int a,i,j;
    char c ='A';
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=(a-i);j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c ",c);
        }
        printf("\n");
    }
}