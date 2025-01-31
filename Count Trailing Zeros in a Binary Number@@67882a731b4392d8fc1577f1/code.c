#include <stdio.h>

int main(){
    int a,count;
    scanf("%d",&a);
    while((a&1)==0){
        count++;
       
    }
    printf("%d",count);
    return 0;
}