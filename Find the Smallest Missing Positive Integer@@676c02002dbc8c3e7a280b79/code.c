// Your code here...
#include <stdio.h>

int findKthMissing(int arr[],int size,int k){
    int count=0,num=1,index=0;
    while(count<k){
        if(index<size && arr[index]==num){
            index++;
        }
        else{
            count++;
            if(count==k){
                return num;
            }
        }
        num++;
    }
    return -1;
}