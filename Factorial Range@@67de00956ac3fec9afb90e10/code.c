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
    int found=0;
    for(int i=start;i<=end;i++){
        if(fact(i)){
            printf("%d\n",i);
            found=1;
        }
    }
        if(!found){
            printf("Invalid Range");
        }
}