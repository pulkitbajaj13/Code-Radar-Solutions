// Your code here...
#include <stdio.h>
#include <limits.h>


int countGlovePairs(int arr[],int n){
    int count=0,i,j;
    for(i=0;i<n;i++){
        if(arr[i]==INT_MIN) continue;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[i]=INT_MIN;
                arr[j]=INT_MIN;
                break;
            }
        }
    }
    return count;
}