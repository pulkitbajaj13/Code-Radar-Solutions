// Your code here...
#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
if(n<=0){
    printf("Invalid input\n");
    return 0;
}
for(int i=0;i<n;i++){
printf("%d ",fibonacciseries(i));
}
return 0;
}
fibonacciseries(n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    return fibonacciseries(n-1) + fibonacciseries(n-2);
}