// Your code here...
#include <stdio.h>
int fact(int num){
    if(num==0||num==1){
        return 1;
    }
    if(num<0){
        num=-num;
    }
    return num*fact(num-1);
}
void factorialRange(int start,int end){
    if(start<0||end<0||start>end){
            printf("Invalid range");
            return;
        }
    for(int i=start;i<=end;i++){
            printf("%d\n",fact(i));
    }
}