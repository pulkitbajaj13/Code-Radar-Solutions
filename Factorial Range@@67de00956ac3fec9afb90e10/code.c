// Your code here...
#include <stdio.h>
int fact(int num){
    if(num==0||num==1){
        return 1;
    }
    while(num<0){
        num=-num;
    }
    return fact(num-1)*num;
}
void factorialRanhge(int start,int end){
    int found=0;
    for(int i=start;i<+end;i++){
        if(start<end){
        if(fact(i)){
            printf("%d\n",i);
            found=1;
        }
        }
        else{
            printf("Invalid Range");
        }
    }
}